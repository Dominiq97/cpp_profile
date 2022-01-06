#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

string baza16(int n){
    string rez="";
    while(n>0){
        int rest;
        rest = n % 16;
        n = n / 16;
        switch(rest){
    case 10:
        rez="A"+rez;
    case 11:
        rez="B"+rez;
    case 12:
        rez="C"+rez;
    case 13:
        rez="D"+rez;
    case 14:
        rez="E"+rez;
    case 15:
        rez="F"+rez;
    default:
        string re=(char) rest;
        rez=re+rez;
        }
    }

}


int main()
{
    cout<< "s = ";
    int s;
    cin >> s;
    string c = baza16(s);
    cout << c;
}
