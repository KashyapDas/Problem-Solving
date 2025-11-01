//#include<bits/stdc++.h>
#include<iostream>

void selectionSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        int smallestindx = i; //unsorted part starting
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallestindx]){
                smallestindx = j;
            }
        }

        std::swap(arr[i], arr[smallestindx]);
    }
}
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}

int main(){
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}

/*  Time complexity: O(n^2) */