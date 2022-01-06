#include <iostream>
using namespace std;
int main()
{
char s[] = "Hello world"; //array of chars
char *ps;
ps = &s[0]; //ps - pointer to the first element of the string
char *pa;
pa = s; //same thing, pointer to the first element of the string
cout<<"ps points at:"<<*ps<<endl; //dereference, we get the first letter
//Special case: we display a sequence of chars instead of an address (the operator << gets char*
//as a string (function overloading))
cout<<ps<<endl;
cout<<(void *)ps<<endl; //in reality, the pointer contains the address (forced conversion)
while (*ps) //if the pointer references a value…
{
cout<<"Adress "<<(void *) ps<<" and the content "<<*ps<<endl;
ps++; //we pass to the next address
}
return 0; }
