
#include "mystack.h"

using namespace std;

int main()
{
    int n,s;
    cin >> n;
    Stack<double> vec;
    for(int i = 0;i<n;i++){
        cin >> s;
        vec.push(s);
    }

    for(int i = n;i>0;i--){
        cout << vec.pop() << "\n";
    }


    return 0;
}
