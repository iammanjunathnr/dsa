#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main()
{
    struct Rectangle r = {0, 0};

    int l = 0, b = 0;

    printf("Enter length and breadth\n");
    cin >> l >> b;
    initialize(&r, l, b);

    int a = area(r);
    int peri = perimeter(r);

    printf("Area = %d\nPerimeter = %d", a, peri);

    return 0;
}