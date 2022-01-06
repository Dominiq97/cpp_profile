#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// 134.49 si 231.95

string convertire(float nr){
    ostringstream buff;
    buff << nr;
    return buff.str();

}



int main()
{
    float n;
    cin >> n;
    string s = convertire(n);
    int c = s.length();
    cout << s << " are " << c - 1 << " cifre.";

    for(int i = 0; i<s.length(); i++){
        cout << s[i];
        if(s[i] == "."){
            i = s.length();
        }
    }



    return 0;
}
