// Find the largest  number in an arrey.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,45,8,0,-23,99};
    int size = 6;
    int largest = INT_MIN;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        
    }
    cout << "Largest = " << largest << endl;

}
