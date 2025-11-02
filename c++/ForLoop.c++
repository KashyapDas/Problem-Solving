#include<iostream>
using namespace std;


int main()
{
    int arr[] = {10,20,30,40,50,60};    

    for(size_t i=0, j=(sizeof(arr)/sizeof(int))-1; i<j; i++, j--)
    {
        swap(arr[i],arr[j]);
    }

    for(int i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}