#include<iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int k)
{
    int st =0;
    int ed = n-1;
    int mid = (st+ed)/2;
    int ans = -1;
    while(st<=ed)
    {
        if(arr[mid] ==k)
        {
            ans = mid;
            ed = mid-1;
        }
        else if(arr[mid]<k)
        {
            st = mid+1;
        }
        else{
            ed = mid-1;
        }
        mid = (st+ed)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {10,20,30,30,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Enter the target : ";
    int target;
    cin>>target;

    int occ = FirstOccurance(arr,n,target);
    if(occ<0)
    {
        cout<<"No Occurance found..."<<endl;
    }
    else{
        cout<<"Occurance found at index : "<<occ<<endl;
    }

    return 0;
}