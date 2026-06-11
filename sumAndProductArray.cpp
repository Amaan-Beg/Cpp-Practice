// Write a Function to calculate sum & product of all numbers in an array.

#include<bits/stdc++.h>
using namespace std;

void sumAndProduct(int arr[], int sz, int &sum, int &product){
    for (int i = 0; i < sz ; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    
};

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = 9;
    int sum = 0;
    int product = 1;

    sumAndProduct(arr, sz,sum,product);

        cout << "Sum = "<< sum << endl;
        cout << "Product = " << product<< endl;

    return 0;
}