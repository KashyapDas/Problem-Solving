//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

bool hasPairWithSum(std::vector<int>& arr, int target){
    int left = 0, right = arr.size() - 1;

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target) return true;
        else if (sum < target) left++;  //Move forward
        else right--;                   //Move backward
    }
    
    return false;
} 

void printVector(std::vector<int>& arr){
    for(auto t: arr)
    {
        std::cout << t << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> nums = {1,2,3,4,6};
    int target;

    std::cout << "vector: ";
    printVector(nums);
   
    std::cout << "\nEnter the Target value: ";
    std::cin >> target;

    std::cout << (hasPairWithSum(nums, target) ? "Found" : "Not Found");
    return 0;
}

/* Used when array is sorted and you need to find a pair, compare values, etc. */