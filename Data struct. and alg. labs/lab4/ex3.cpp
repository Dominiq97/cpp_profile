#include <iostream>
#include <string>
#include "stack.h"
using namespace std;
int main(){
    Stack <char> stack1, stack2, copyStack;
	string s = "a santa at nasa";

	char suite[30];
	for(int i=0; i<s.length(); i++){
		suite[i]=s[i];
		if (suite[i]!= ' ')
            stack1.push(suite[i]);
	}

	copyStack = stack1;

	int m = stack1.getTopLevel();
    for(int i=0; i<=m; i++){
        stack2.push(stack1.pop());
	}

	bool ok=true;
	for(int i=0; i<=m/2; i++){
            if (stack2.pop()!=copyStack.pop())
                ok=false;
	}

	if (!ok)
        cout<<endl<<"Not palindrome!!!";
    else
        cout<<endl<<"Palindrome!!!";
}
