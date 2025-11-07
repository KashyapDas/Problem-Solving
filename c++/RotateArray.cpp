#include<iostream>
using namespace std;

void ReverseArray(int arr[][3], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0, k=n-1; j<k; j++, k--)
        {
            swap(arr[i][j], arr[i][k]);
        }
    }
}

void RotateArray(int arr[][3], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i!=j)
                swap(arr[i][j], arr[j][i]);
        }
    }
    ReverseArray(arr,n);
}



void Print(int arr[][3], int n){
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int n = sizeof(arr)/sizeof(arr[0]);

    RotateArray(arr,n);
    Print(arr,n);


    return 0;
}