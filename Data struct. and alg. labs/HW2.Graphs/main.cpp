#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#define f first
#define s second
using namespace std;

vector < int > G_in[ 100 ];
vector < int > G_out[ 100 ];

map < int, string > nr_city;
map < string , int > city_nr;

int fv[100], gas[100];

int n, m, ma = 0, ind, cnt, gst, x, nr_cars, init, consump, rsp;
string s, s1, s2, specific_city, station, car;


int bfs ()
{
    queue < pair < int, int > > q;
    memset( fv, 0, sizeof(fv) );

    q.push( { x , init } );

    pair < int , int > aux;

    while ( !q.empty() )
    {
        aux = q.front();
        q.pop();

        fv[ aux.f ] = 1;

        if ( gas[ aux.f ] == 1 )
        {
            return aux.f;
        }

        for ( int i = 0 ; i < G_out[ aux.f ].size() ; i++ )
        {
            if ( fv[ G_out[ aux.f ][i] ] == 0 && aux.s >= consump )
            {
                q.push( { G_out[ aux.f ][i], aux.s - consump } );
            }
        }
    }

    return -1;

}

void dfs( int nod )
{
    fv[nod] = 1;

    for ( int i = 0 ; i < G_out[nod].size() ; i++ )
    {
        if ( fv[ G_out[nod][i] ] == 0 )
        {
            dfs( G_out[nod][i] );
        }
    }

}

void conex()
{
    int ver = 1;

    for ( int i = 1; i <= n ; i++ )
    {
        if ( fv[i] == 0 )
        {
            ver = 0;
        }
    }

    if ( ver )
        cout<<"The road map is valid\n";
    else
        cout<<"The road map is not valid\n";
}

int inacc_cities ()
{
    int cnt = 0;

    int ver_in = 0;
    int ver_out = 0;

    for ( int i = 1 ; i <= n; i++ )
    {
        ver_in = 0;
        ver_out = 0;

        for ( int j = 0 ; j < G_out[ city_nr[ specific_city ] ].size() ; j++ )
        {
            if ( G_out[ city_nr[ specific_city ] ][j] == i )
            {
                ver_out = 1;
            }
        }
        for ( int j = 0 ; j < G_out[ i ].size() ; j++ )
        {
            if ( G_out[ i ][ j ] == city_nr[ specific_city ] )
            {
                ver_in = 1;
            }
        }

        if ( ver_in == ver_out && ver_out == 1 )
        {
            cnt++;
            fv[i] = 1;
        }

    }

    return cnt;

}

int main (){

    cin>>n>>m;

    for ( int i = 1; i <= n ; i++ )
    {
        cin>>s;
        nr_city[i] = s;
        city_nr[s] = i;
    }

    for ( int i = 1; i <= m; i++ )
    {
        cin>>s1>>s2;
        G_out[ city_nr[s1] ].push_back( city_nr[s2] );
        G_in[ city_nr[s2] ].push_back( city_nr[s1] );
    }

    for ( int i = 1; i <= n; i++ )
    {
        if ( G_in[i].size() > ma )
        {
            ma = G_in[i].size();
            ind = i;
        }
    }

    cout<<"\nThe most crowded city is "<<nr_city[ind]<<'\n';

    dfs(1);
    conex();

    for ( int i = 1; i <= n ; i++ )
    {
        specific_city = nr_city[i];
        memset( fv , 0 , sizeof(fv) );
        cnt = inacc_cities();

        cout<<"Starting from "<<nr_city[i]<<" there are "<<n-cnt<<" inaccessible cities:\n";

        for ( int j = 1; j <= n ; j++ )
        {
            if ( j!=i && fv[j] == 0 )
            {
                cout<<nr_city[j]<<" ";
            }
        }

        cout<<'\n';
    }

    cin>>gst;

    for ( int i = 1; i <= gst ; i++ )
    {
        cin>>station;
        x = city_nr[station];
        gas[x] = 1;
    }
    cin>>nr_cars;

    for ( int i = 1; i <= nr_cars; i++ )
    {
        cin>>car>>init>>consump;
        x = city_nr[car];
        rsp = bfs();
        if ( rsp == -1 ){
            cout<<"Car nr. "<<i<<" can't reach a gas station\n";
        }else{
            cout<<"The closest gas station that car nr. "<<i<<" can reach is in "<<nr_city[rsp]<<'\n';
        }

    }

    return 0;
}

