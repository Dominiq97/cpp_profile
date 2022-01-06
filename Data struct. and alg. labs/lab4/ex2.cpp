#include <iostream>
#include <stdio.h>
using namespace std;
#include "stack.h"

int main(){
    int n;
    double nr;
    Stack <double> numbers; // declares and initializes a stack of numbers
    cout << " Type in an integer n: " << endl;
    cin >> n;

    cout << " Type n double numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nr;
        numbers.push(nr);
    }
    cout << endl;

    while (!numbers.isEmpty())
        cout << numbers.pop() << " ";

    return 0;
 }
