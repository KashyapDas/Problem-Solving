//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}


void countsort(int arr[], int n, int exp){
   int countArray [10] = {0};

    for(int i = 0; i < n; i++) 
        countArray[(arr[i]/exp) % 10]++;

    for(int i = 1; i < 10; i++) 
        countArray[i] += countArray[i - 1];

    int outputArray[n];

    for(int i = n-1; i >= 0; i--){
        outputArray[countArray[(arr[i]/exp) % 10] - 1] = arr[i];
        
        countArray[(arr[i]/exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = outputArray[i];
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
}

void radixSort(int arr[], int n){
    int exp;
    int m = getMax(arr, n);
    vector<int> output;

    for(exp = 1; m / exp > 0; exp *= 10){
        countsort(arr, n, exp);
    }   

}

int main(){
    int arr[] = {401, 70, 8, 923, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "before: \n";
    printArray(arr, n);
    
    cout << "\n After: \n";
    radixSort(arr, n);
    printArray(arr, n);
    return 0;
}