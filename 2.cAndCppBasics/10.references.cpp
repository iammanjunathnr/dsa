#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int &r = a;
    int b = 12;

    cout << a << " " << r << endl;

    r = b;

    cout << a << endl;
    cout << r << endl;
    cout << b << endl;

    return 0;
}