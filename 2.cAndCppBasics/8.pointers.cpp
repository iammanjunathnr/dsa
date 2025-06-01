#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    // int *p = &a; OR we can do the same in 2 steps

    // int *p;
    // p = &a;

    // cout << a << endl;
    // cout << *p << endl;

    // cout << &a << endl;
    // cout << p << endl;

    // int A[5] = {2, 4, 6, 8, 10};
    // int *p = A;
    // for (int i = 0; i < 5; i++)
    //     cout << p[i] << " ";

    // Creating an array in heap

    // int *p;
    // // p = (int *)malloc(5 * sizeof(int));
    // p = new int[5];
    // p[0] = 11;
    // p[1] = 12;
    // p[2] = 13;
    // p[3] = 14;
    // p[4] = 15;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << p[i] << " ";
    // }

    int *p1;
    char *p2;
    float *p3;
    double *p4;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    return 0;
}