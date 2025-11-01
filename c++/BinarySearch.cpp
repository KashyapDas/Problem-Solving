// Implement Binary Search to return the element index from array

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target)
{
    int start = 0, end = size-1;
    int mid = (start+end)/2;
    while(start<end)
    {
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target)
        {
            start++;
        }        
        else{
            end--;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter the target : "<<" ";
    cin>>target;
    int index = BinarySearch(arr,size,target);
    if(index<0) cout<<"Element not found..."<<endl;
    else cout<<"Element found at index : "<<index<<endl;


    return 0;
}