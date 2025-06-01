#include <iostream>
using namespace std;

struct Rectangle // Definition
{
    int length;
    int breadth;
    char x;
} r3, r4; // Global declaration

struct Rectangle r5, r6;

int main()
{
    struct Rectangle r1;
    r1.length = 2;
    r1.breadth = 2;
    struct Rectangle r2 = {10, 5};
    r2.length = 15;
    r2.breadth = 7;
    cout << r2.length << " " << r2.breadth << endl;

    return 0;
}