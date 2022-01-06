#include <iostream>
#include <string>
#include <map>
using namespace std;

struct node
{
    string info;
    node *nxt;
};

node *pr , *ul;
int n, ind = 1, poz = 2;

map < string , int > fv, found;

void create ()
{

    node *q = new node;

    cin >> q->info;

    q->nxt = NULL;

    ul = pr = q;

}

void add ()
{
    node *q = new node;

    cin>>q->info;

    q->nxt = pr;

    ul->nxt = q;

    ul = q;

}

int main ()
{
    cin>>n;

    create();

    for ( int i = 2; i <= n; i++ )
    {
        add();
    }

    if ( pr->info == ul->info )
    {
        cout <<"The word said at the beginning is the same one as the last one\n";
    }
    else
    {
        cout <<"The word said at the beginning is not the same one as the last one\n";
    }

    node *q;
    int cnt = 0;

    q = pr->nxt;

    while ( q != pr )
    {
        if ( q->info == pr->info )
        {
            cnt++;
        }
        q = q->nxt;
    }

    cout<<"Aside from the first person, "<<cnt<<" persons said the world correctly\n";

    cout<<"The word's encountered variants are:\n";

    q = pr->nxt;

    fv[pr->info] = 1;

    while ( q != pr )
    {
        if ( fv.find( q->info ) == fv.end() )
        {
            fv[q->info] = 1;
        }
        else
        {
            fv[q->info]++;
        }

        q = q->nxt;

    }

    q = pr;

    while ( q->nxt != pr )
    {
        if ( found.find( q->info ) == found.end() )
        {
            cout<<q->info<<" "<<fv[q->info]<<" times\n";
            found[ q->info ] = 1;
        }
        q = q->nxt;
    }

    q = pr;
    cnt = 1;

    int ma = 1;

    while ( q->nxt != pr )
    {
        if ( q->info == q->nxt->info )
        {
            cnt++;
        }
        if ( cnt > ma )
        {
            ma = cnt;
            ind = poz;
        }
        poz++;
        q = q->nxt;
    }

    cout<<"The longest sequence of persons who said the same word is from person "<<ind-cnt+1<<" to "<<ind;

    return 0;
}
