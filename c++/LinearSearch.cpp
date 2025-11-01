// Implement Linear Search to return the element index from array

#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main()
{
    int arr[] = {10,36,29,410,45,9,57,83};
    int size = sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter your target : "<<" ";
    cin>>target;
    int index = LinearSearch(arr,size,target);
    if(index<0) cout<<"Element not found..."<<endl;
    else cout<<"Element found at index : "<<index<<endl;
    return 0;
}