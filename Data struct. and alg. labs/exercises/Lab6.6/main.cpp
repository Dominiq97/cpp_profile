#include <iostream>
using namespace std;
void modify1 (int a[])
{
a[2]=15;
}
void modify2 (int *a)
{
*(a+2) = 15; //same effect as modify1
}

int main()
{
int x[]={1,2,3,4};
cout<<"Before the fonction:" <<x[2] << endl;
modify2(x);
int *p=&x[0]; //same:
//int *p = &x[0];
// modify2(p);
// modify2(x);
cout<<"After the function: " << x[2]<< endl;
return 0;
}
