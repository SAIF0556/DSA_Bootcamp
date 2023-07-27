#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    char ch = s[0];
    char *p = &ch;
    cout << "The first character of the string is: " << *p << endl;
    return 0;
}