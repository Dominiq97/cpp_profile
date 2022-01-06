#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int modulo(int x, int y=10){
    return x % y;
}

int main()
{

    srand(time(0));
    cout << (rand() % 100) << endl;

    cout << modulo(53,4) << endl;
    cout << modulo(24);


return 0;

}
