#include <iostream>

using namespace std;

void foo(int i) //value
{
 	 i++;
	 cout << "In the function: " << i << endl;
}

int main()
{
    int i = 0;

 	cout << "Before the function: " << i << endl;
	foo(i); //local changes
	cout << "After the function: " << i << endl;

 	return 0;
}

