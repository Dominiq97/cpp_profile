#include <iostream>
#include <math.h>
#include <limits>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << b / a << "---";
    cout << (a % 10) + ((a/10)%10) << "---";
    cout << sqrt(c) << endl;

    int imin = numeric_limits<int>::min(); // minimum value
    int imax = numeric_limits<int>::max();

    cout << imin << " <-> " << imax;



    return 0;
}
