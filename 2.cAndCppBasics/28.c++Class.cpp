#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b);
    int area();
    int perimeter();
    int getLength()
    {
        return length;
    }
    int getBreadth();
    void setLength(int l)
    {
        length = l;
    }
    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int Rectangle::getBreadth()
{
    return breadth;
}

int main()
{
    Rectangle *r = new Rectangle(10, 5);
    // Rectangle r(10,5);
    cout << "Default parameterized constructor's length and Breadth" << endl;
    cout << "Length: " << r->getLength() << "\nBreadth: " << r->getBreadth() << endl;

    cout << "Area: " << r->area() << endl;
    cout << "Perimeter: " << r->perimeter() << endl;

    r->setLength(20);

    cout << "New length: " << r->getLength() << endl;

    // r->~Rectangle(); //Bad practice instead use delete r

    delete r;
}