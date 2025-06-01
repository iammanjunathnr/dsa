#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

// Pass by address

void swapByAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Pass by reference

void swapByReference(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Sum is : " << add(x, y) << endl;

    swapByAddress(&x, &y);
    cout << "Swapped x : " << x << " and y: " << y << endl;

    swapByReference(x, y);
    cout << "Swapped x : " << x << " and y: " << y << endl;

    return 0;
}