#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int areaRectangleByValue(struct Rectangle r1)
{
    return r1.length * r1.breadth;
}

int areaRectangleByReference(struct Rectangle &r)
{
    return r.length * r.breadth;
}

void changeLength(struct Rectangle *p, int newLength)
{
    p->length = newLength;
}

// Create a struct on heap and return it's pointer

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new struct Rectangle;

    return p;
}

int main()
{

    struct Rectangle r = {10, 5};
    int areaByVal = areaRectangleByValue(r);
    int areaByRef = areaRectangleByReference(r);
    cout << "Area: " << areaByVal << endl;
    cout << "Area: " << areaByRef << endl;
    changeLength(&r, 20);
    cout << "New length: " << r.length << endl;

    struct Rectangle *A;
    A = fun();

    A->length = 15;
    A->breadth = 7;

    cout << "Length " << A->length << endl
         << "Breadth " << A->breadth << endl;

    return 0;
}