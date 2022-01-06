#include <iostream>
using namespace std;
int main() {
int mat[3][3] = {{2,3,4}, {5,6,7}, {8,9,10}};
int *pmat = mat[2];
cout<<*pmat;
 //mat[0] contains the address
//of the first element of the matrix
// int *pmat = &mat[0][0]; - what is the effect of this?
for (int i=0; i<9; i++)
cout<<*(pmat++) << " ";
return 0;
}
