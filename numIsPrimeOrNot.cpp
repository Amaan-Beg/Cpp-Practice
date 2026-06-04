#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }

    return 0;
}