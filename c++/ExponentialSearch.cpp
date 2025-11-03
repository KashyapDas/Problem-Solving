#include<iostream>
using namespace std;

int binarySearch(int arr[], int st, int ed, int target)
{
    int mid = (st+ed)/2;
    while (st<=ed)
    {
        if(arr[mid]==target) return mid;
        else if (arr[mid]<target) st = mid +1;
        else ed = mid -1;
        mid = (st+ed)/2;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int x)
{
    if(arr[0]==x) return 0;
    int i=1;
    while (i<n && arr[i]<=x)
    {
        i = i*2;
    }
    return binarySearch(arr,i/2, min(i,n-1), x);
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Enter the target : ";
    int target;
    cin>>target;

    int index = exponentialSearch(arr,n,target);

    if(index<0) cout<<"Element not found..."<<endl;
    else cout<<"Element found at the index : "<<index<<endl;
    return 0;
}