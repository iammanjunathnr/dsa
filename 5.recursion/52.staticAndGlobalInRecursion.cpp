#include <iostream>
using namespace std;

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int a = 5;
    cout << fun(a) << endl;

    return 0;
}

// Couldn't do anything on 08 June 2025 - Sunday