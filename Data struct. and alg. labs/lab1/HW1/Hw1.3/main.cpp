#include <iostream>

using namespace std;

bool prime(int x, int y){
    while(x!=y){
        if(x>y){
            x=x-y;
        }else if(x<y){
            y=y-x;
        }

    }
    if(x==1){
        return true;
    }
    return false;

}


int main()
{

    int m,n;
    cin>>m;
    cin>>n;
    if(prime(m,n)){
        cout<<"PRIM";
    }else cout<<"NEPRIM";
    return 0;
}
