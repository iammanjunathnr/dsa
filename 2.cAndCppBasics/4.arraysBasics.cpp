#include <iostream>
using namespace std;

int main()
{

    int A[10] = {2, 4, 6, 8, 10, 12, 14}; // we can skip the size
    // int A[5];
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    // cout << sizeof(A) << endl;
    // printf("%d\n", A[2]);
    // cout << A[3] << endl;

    // for-each loop
    for (int x : A)
    {
        printf("%d ", x);
    }

    return 0;
}