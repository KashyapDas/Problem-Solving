/***  Same Direction Pointers(Start Together, Move right)   ***/

//#include<bits/stdc++.h>
#include<iostream>
#include<vector>

int removeDuplicates(std::vector<int>& nums){
    if(nums.empty()) return 0;
    int slow = 0;
    for(int fast = 1; fast < nums.size(); fast++){
        if(nums[fast] != nums[slow]){
            slow++;
            nums[slow] = nums[fast];
        }
    }
    return slow + 1;
}

void printVector(std::vector<int>& nums){
    for(auto v : nums){
        std::cout << v << " "; 
    }
    std::cout << "\n";
}


int main(){
    std::vector<int> nums = {5, 6, 7, 8, 8, 9, 9, 0, 13, 4, 5};
    std::cout << "the list before: \n";
    printVector(nums);

    std::cout << "The list after: \n";
    removeDuplicates(nums);
    printVector(nums);

    return 0;
}

/* Used to find patterns in substrings, subarrays, or remove duplicates. */