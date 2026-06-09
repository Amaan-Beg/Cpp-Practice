// Find the smallest  number in an arrey.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,45,8,0,-23,99};
    int size = 6;
    int smallest = INT_MAX;

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        
    }
    cout << "Smallest = " << smallest << endl;

}
