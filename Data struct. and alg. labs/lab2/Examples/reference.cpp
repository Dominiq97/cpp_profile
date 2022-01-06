#include <iostream>
using namespace std;

void foo(int &i)  // Reference operator
{
    i++;
	cout << "In the function: " << i << endl;
}

int main()
{
 	 int i = 0;

	cout << "Before the function: " << i << endl;
 	foo(i); //we use the address
	cout << "After the function: " << i << endl;

	return 0;
}

