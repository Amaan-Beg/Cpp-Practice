// Find the largest  number in an array with its index.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,45,8,0,-23,99};
    int size = 6;
    int largest = INT_MIN;
    int index = 0;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
        
    }
    cout << "Largest = " << largest << endl;
    cout << "Index = " << index << endl;

    return 0;

}
