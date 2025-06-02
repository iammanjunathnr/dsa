#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};

int main()
{
    struct Rectangle r = {0, 0};
    int len, bre;
    cin >> len >> bre;
    r.initialize(len, bre);
    int a = r.area();
    int p = r.perimeter();

    printf("Area = %d\nPerimeter = %d", a, p);
    return 0;
}