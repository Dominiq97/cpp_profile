#include <iostream>

using namespace std;

int swap3(int*a, int*b) //the parameters are pointers, we must call the function using addresses
{
int x = *a;
*a = *b;
*b = x;
}

int main(){

int x[]={1,2,3,4,5,6};
int *px=&x[0];

int *lx=&x[5];


for (int i=0; i<6; i++){
cout<<*(px++) << " ";
}
cout <<"\n";
for (int i=5; i>-1; i--){
cout<<*(lx--) << " ";
}

int *ppx=&x[0];
for(int i=0;i<3;i++){
    swap3(&x[i],&x[4-i+1]);
}

cout <<"\n";

for (int i=0; i<6; i++){
    cout<<*(ppx++) << " ";
}





return 0;
}
