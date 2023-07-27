/*
Q4. Given a pointer to the first element (0,0) of a 2D integer array, return a pointer to its last element (m-1,n-1). Where m & n are integers and denote the no. of rows and no. of cols in the 2D array.

int* lastEl(int* firstEl, int m, int n) {}
*/

#include <iostream>
using namespace std;

int *lastEl(int *firstEl, int m, int n)
{
    return firstEl + m * n - 1;
}

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int m = sizeof(arr) / sizeof(arr[0]);
    int n = sizeof(arr[0]) / sizeof(arr[0][0]);

    cout << *lastEl(&arr[0][0], m, n);

    return 0;
}