
//#include "mystack.h"





int main()
{
	Stack<int> myStack;
	myStack.peek();
	myStack.push(5);
	myStack.push(2);
	myStack.push(3);
	cout<<myStack.peek()<<"\n";
	cout<<myStack.pop();
	myStack.push(1);
	myStack.push(4);
	cout<<myStack.pop();
	return 0;
}






