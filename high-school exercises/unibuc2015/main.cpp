#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c,n;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "n = ";
    cin >> n;
    int vec[n];
    for(int i = 0;i<n;i++){
        cout << "vec[" << i+1 << "]= ";
        cin >> vec[i];
    }
    for(int i = 0;i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if (c == (a*vec[i]*vec[i] + b*vec[j]*vec[j])){
                cout << "(" << vec[i] << "," << vec[j] << ") ";
                cout << "(" << vec[j] << "," << vec[i] << ") ";

            }


        }
    }




    return 0;
}
