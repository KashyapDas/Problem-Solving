// Reverse a string using 2-ptr approach

#include<iostream>
using namespace std;

void ReverseString(int arr[], int size)
{
    int st = 0, ed=size-1;
    while(st<ed)
    {
        swap(arr[st], arr[ed]);
        st++;
        ed--;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(int);

    ReverseString(arr, size);
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}