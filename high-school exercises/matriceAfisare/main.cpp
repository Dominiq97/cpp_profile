#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    int mat[n][n];
    for (int i = 0; i< n; i++){
        for (int j = 0; j<n ; j++){
            mat[i][j] = 0;
        }
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
