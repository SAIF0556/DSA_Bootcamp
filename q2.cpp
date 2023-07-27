/*Q2. Find the sizes of the following data types using pointer arithmetics:
•bool
•char
•int
•double
•long long
•long double
*/

#include <iostream>
using namespace std;

int main()
{
    bool *p1;
    char *p2;
    int *p3;
    double *p4;
    long long *p5;
    long double *p6;

    cout << "Size of bool: " << sizeof(p1) << endl;
    cout << "Size of char: " << sizeof(p2) << endl;
    cout << "Size of int: " << sizeof(p3) << endl;
    cout << "Size of double: " << sizeof(p4) << endl;
    cout << "Size of long long: " << sizeof(p5) << endl;
    cout << "Size of long double: " << sizeof(p6) << endl;

    return 0;
}
