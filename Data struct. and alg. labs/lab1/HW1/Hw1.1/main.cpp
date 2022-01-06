#include <iostream>
#include <math.h>

using namespace std;

void primeNumebers(int n){
    int cont=0, x=2;
    while(cont!=n){
        int nr=0;
        for(int i=2;i<=x/2;i++){
            if(x % i == 0){
                nr++;
            }
        }
        if(nr==0){
            cout<<x<<" ";
            cont++;
        }
        x++;

    }
}


int main()
{
    int x;
    cin>>x;
    primeNumebers(x);


    return 0;
}
