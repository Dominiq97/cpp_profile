#include <iostream>

using namespace std;

template<typename T>
 T maxim(T a, T b) {
		return a > b ? a : b;
 }

int main()
{
    int a = 10;
    int b = 15;

    cout << maxim(a, b) << endl;
    //cout << maxim<int>(a, b) << endl;

    cout << maxim(2.5, 1.7) << endl;
    cout << maxim('c', 'h') << endl;

    cout << min(2, 3) << endl;
    cout << min(7.8, 8.2) << endl;

}
