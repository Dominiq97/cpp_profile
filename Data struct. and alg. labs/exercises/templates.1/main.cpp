#include <iostream>

using namespace std;

template <typename T>
T swaping(T &a, T &b) {
    T aux = a;
    a = b;
    b = aux;
}

template <class T>
T sortare(T arr[5]){
    bool ok = false;
    int n = 5;
    while(!ok){
        ok = true;
        for(int i=0 ; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                swaping(arr[i],arr[i+1]);
                ok = false;
            }
        }
    n--;
    }
}

int main()
{
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    sortare(a);
    for(int i = 0;i<5;i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}
