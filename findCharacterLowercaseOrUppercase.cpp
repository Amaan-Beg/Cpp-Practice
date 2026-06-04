// Find Character Lowercase or Uppercase
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else
    {
        cout << "Uppercase" << endl;
    }
}