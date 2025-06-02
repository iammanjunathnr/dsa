#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add();
    T subtract();
};

template <class T>
T Arithmetic<T>::add()
{
    T sum = a + b;
    return sum;
}

template <class T>
T Arithmetic<T>::subtract()
{
    T difference = a - b;
    return difference;
}

int main()
{
    Arithmetic<int> ar(10, 5);

    cout << "Sum: " << ar.add() << endl;
    cout << "Difference: " << ar.subtract() << endl;

    Arithmetic<float> ar1(1.5, 1.2);

    cout << "Sum: " << ar1.add() << endl;
    cout << "Difference: " << ar1.subtract() << endl;

    return 0;
}