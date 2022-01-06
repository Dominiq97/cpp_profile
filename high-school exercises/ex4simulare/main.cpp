#include <iostream>

using namespace std;

int main()
{
    int m;
    int n;

    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;
    int a[m];
    int b[n];
    for(int i = 0; i< m; i++){
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for(int j = 0; j< n; j++){
        cout << "b[" << j << "]=";
        cin >> b[j];
    }

    int x;
    for(int k = n-1; k>-1; k--){
        x = b[k];
        if(x % 2 == 0){
            cout << x << " ";
        }
        if(a[k]>b[k]){
            x = a[k];
        }
    }

    return 0;
}
