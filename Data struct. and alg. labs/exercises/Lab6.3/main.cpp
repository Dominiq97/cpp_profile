
#include<iostream>
using namespace std;
int swap1(int a, int b) //parameters passed by value
{
int x = a;
a = b;
b = x;
}
int swap2(int&a, int&b) //parameters passed by address
{
int x = a;
a = b;
b = x;
}
int swap3(int*a, int*b) //the parameters are pointers, we must call the function using addresses
{
int x = *a;
*a = *b;
*b = x;
}

int main()
{
int a = 15;
int b = 38;
int *pa;
pa = &a;
int *pb;
pb= &b;
swap1(a,b);
cout<<a<<"|"<<b<<"\n";
swap2(a,b);
cout<<a<<"|"<<b<<"\n";
swap3(&a,&b); //call using addresses
cout<<a<<"|"<<b<<"\n";
swap3 (pa,pb);
cout<<a<<"|"<<b<<"\n";
return 0;
}
