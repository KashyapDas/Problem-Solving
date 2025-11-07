#include<bits/stdc++.h>
using namespace std;

void TransposeArray(int arr[][3], int n){
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++){
            if(i!=j)
            {
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
}


void Print(int arr[][3], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter the size of the array : ";
    int n;
    cin>>n;
    int arr[3][3];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    TransposeArray(arr,n);
    Print(arr,n);
    
    return 0;
}