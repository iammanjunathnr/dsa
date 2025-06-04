#include <iostream>
using namespace std;

int main()
{

    int A[] = {1, 2, 3, 4, 1, 3, 4, 2, 1, 4};
    int size = sizeof(A) / sizeof(int);
    cout << size << endl;

    for (int i = 0; i < size; i++) // runs for n times, therefore O(n)
    {
        cout << A[i] << endl;
    }

    return 0;
}