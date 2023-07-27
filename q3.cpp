/*
Q3. Given to pointer to the last element of a (0 indexed) linear integer array, and an integer n denoting the size of the array. Reverse the array, and return nothing.

void esrever(int* lastElement) {}
*/

#include <iostream>
using namespace std;

void esrever(int *lastElement, int n)
{
    int *firstElement = lastElement - n + 1;
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(firstElement + i);
        *(firstElement + i) = *(lastElement - i);
        *(lastElement - i) = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    esrever(&arr[n - 1], n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}