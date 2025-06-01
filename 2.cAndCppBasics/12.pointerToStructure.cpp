#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    struct Rectangle r = {8, 4};

    // using dot operator
    cout << r.length << " "
         << r.breadth << endl;

    struct Rectangle *q = &r;
    // using pointer to structure
    cout << q->length << " " << q->breadth << endl;

    // Dynamic allocation of memory to create struct
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // p = new Rectangle;
    p->length = 10;
    p->breadth = 5;

    cout << p->length << " " << p->breadth << endl;

    return 0;
}