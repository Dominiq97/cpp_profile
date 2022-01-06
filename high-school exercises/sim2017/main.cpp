#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout << "Dati n = ";
    cin >> n;
    int mat[n][n];
    int i = 0;
    for (int j = 0; j< n; j++){
        mat[i][j] = n;
    }


    int p = n - 1;
 //   cout << p;
    int c = 1;
    for (i = n-1; i>-1; i--){
       mat[i][p] = c;
       c++;
    }

    for(i = 1; i<n; i++){
        for(int r = n-2; r>-1; r--){
            mat[i][r] = mat[i][r+1] + mat[i-1][r];
        }
    }

        for(i = 0; i<n; i++){
        for (int g = 0; g<n; g++){
            cout << mat[i][g] << " ";
        }
        cout << endl;
    }



    return 0;
}
