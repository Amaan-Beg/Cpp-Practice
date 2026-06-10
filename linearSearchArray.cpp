// Find the index of the target value by using linear search in an Array.

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int target, int sz)
{

    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 7, 9, 4, 12, 6, 55};
    int sz = 7;
    int target = 4;
    cout << linearSearch(arr, target, sz) << endl;

    return 0;
}