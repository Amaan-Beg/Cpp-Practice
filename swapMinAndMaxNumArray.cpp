// WAF to swap the max and min number of an array.

#include <bits/stdc++.h>
using namespace std;

void swapMinAndMaxNum(int arr[], int sz)
{
    int largestIndex = 0;
    int smallestIndex = 0;

    for (int i = 1; i < sz; i++)
    {
        if (arr[i] > arr[largestIndex])
            largestIndex = i;

        if (arr[i] < arr[smallestIndex])
            smallestIndex = i;
    }

    swap(arr[largestIndex], arr[smallestIndex]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 9, 8, 7};
    int sz = 9;

    swapMinAndMaxNum(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}