#include <iostream>
using namespace std;

// Passing array as parameter (through pointer)

// void fun(int *A, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }
// }

// Function returning an array

int *fun(int n)
{
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    // int A[5] = {2, 5, 4, 3, 6};
    // fun(A, 5);
    int *A;
    A = fun(5);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}