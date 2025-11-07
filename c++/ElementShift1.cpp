#include<iostream>
using namespace std;

void ElementShifting(int arr[], int n)
{
    int index = n-1;
    while(index>=1){
        swap(arr[index], arr[index-1]);
        index--;
    }
}

void Print(int arr[], int n){
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    ElementShifting(arr,n);
    Print(arr,n);

    return 0;
}