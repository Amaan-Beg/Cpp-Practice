// WAF to print all the unique values in an array.

#include <bits/stdc++.h>
using namespace std;

void uniqueValues(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        int count = 0;

        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1,2,1,3,4,3,5,6,5,7,8,7,9,10,9};
    int sz = 15;

    uniqueValues(arr, sz);

    return 0;
}