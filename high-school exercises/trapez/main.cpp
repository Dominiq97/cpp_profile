#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    int AB, CD, BC;
    cout << "AB = ";
    cin >> AB;
    cout << "CD = ";
    cin >> CD;
    cout << "BC = ";
    cin >> BC;
    int dif = (AB - CD) / 2;
    int h = sqrt(BC*BC - dif*dif);
    cout << h;


    int g = dif + CD;
    cout << g;
    float diag = sqrt(h*h+g*g);
    cout << fixed << setprecision(2) << "-- " << diag << " --"<< endl;
    printf("%.2f", diag);



    return 0;
}
