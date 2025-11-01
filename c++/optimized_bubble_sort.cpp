//#include<bits/stdc++.h>
#include<iostream>

void bubblesort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
            bool isSwap = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if(!isSwap){ //Array is already sorted
            return;
        }
    }
}

int main(){
    int arr[] = {4, 2, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    std::cout << "Sorted array: \n";
    
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


/* Best case:       O(n)
   Average case:    O(n^2) 
   Worst case:      O(n^2)*/