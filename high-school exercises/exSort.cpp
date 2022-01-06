#include <iostream>

using namespace std;

template <typename T>
void swapVal(T &ob1, T &ob2)
{
    T aux = ob1;
    ob1 = ob2;
    ob2 = aux;
}
double v[5];
int i;

template <typename T>
void sortare(T v[])
{
    int ok;
    ok = 1;
    while (ok) {
        ok = 0;
        for (i = 0; i < 4; i++)
            if (v[i] > v[i + 1])
                {
                    swapVal(v[i],v[i+1]);
                    ok = 1;
                }
    }
}

int main() {
    for (i = 0; i<5; i++) {
            cout<<"Insert element "<<(i+1)<<":";
            cin>>v[i];
    }
    sortare(v);
    for (i = 0; i<5; i++) cout<<v[i]<<" ";
    return 0;


}
