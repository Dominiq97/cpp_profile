#include <iostream>
#include <string>
using namespace std;
int main()
{
string day[] = {"Moday", "Tuesday", "Wednesday"};
string *pday = day; //string *pday = &day[0]; -> same
string **ppday = &pday; //pointer to pointer
cout<<"A: Value: "<<*pday<<", at the address: "<<pday<<endl;
cout<<"B: Value: "<<**ppday<<", to the address of the level 1 pointer (pday): "
<< *ppday <<endl;
cout<< " and the address of the level 2 pointer (ppday): "<< ppday<<endl;
if (*ppday==pday)
cout<<"Same addresses!";
return 0;
}
