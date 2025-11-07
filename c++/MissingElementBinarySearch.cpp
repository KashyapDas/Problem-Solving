#include<iostream>
using namespace std;

int MissingElement(int arr[], int n)
{
    int st=0, ed=n-1;
    int mid;
    int ans = -1;
    while(st<=ed)
    {
        mid = (st+ed)/2;
        int diff = arr[mid]-mid;
        if(diff == 1)
        {
            st = mid+1;
        }
        else if(diff==2){
            ans = mid;
            ed = mid-1;
        }
    }

    if(ans+1 == 0) return n+1;
    return ans+1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;

    int result = MissingElement(arr,n);
    cout<<"Missing Element is : "<<result<<endl;

    return 0;
}