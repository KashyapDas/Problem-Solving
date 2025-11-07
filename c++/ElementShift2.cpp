#include<iostream>
using namespace std;

void ElementShift(int arr[], int n, int k)
{
    int calc = 1;

    for(int i=0; i<k; i++, calc++)
    {
        for(int j=n-1; (j>=calc) && (calc<=k) ;j--)
        {
            swap(arr[j],arr[j-1]);
        }
    }
}

void Print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {10,20,30,40,50,60};

    cout<<"Element the step you want to shift : ";
    int k;
    cin>>k;
    
    int n = sizeof(arr)/sizeof(int);

    ElementShift(arr,n,k);
    Print(arr,n);

    return 0;
}