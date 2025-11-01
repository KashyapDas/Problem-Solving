// Implement Binary Search in Recursion

#include<iostream>
using namespace std;

int BinaryRecursion(int arr[], int st, int ed, int target,int res)
{
    int mid = (st+ed)/2;

    if(st>ed) return res;
    else if(arr[mid] == target) return mid;
    else if(arr[mid]<target){
        res =  BinaryRecursion(arr,mid+1, ed, target,res);
        return res;
    }
    else{
        res = BinaryRecursion(arr,st, mid-1, target,res);
        return res;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int target;
    cout<<"Enter the target you want to find"<<" ";
    cin>>target;
    int res = -1;
    int start = 0;
    int end = (sizeof(arr)/sizeof(int))-1;

    int result = BinaryRecursion(arr,start,end,target,res);
    if(result<0) cout<<"Element not found..."<<endl;
    else cout<<"Element found at index : "<<result<<endl;

    return 0;
}