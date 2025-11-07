#include<iostream>
using namespace std;

int MissingNo(int arr[], int n){
    int diff = arr[1] - arr[0];
    for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i] != diff) return arr[i+1]-diff;
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,50,60,70,80,90};
    int n = sizeof(arr)/sizeof(int);
    int result = MissingNo(arr,n);

    if(result != -1) cout<<"The missing element is : "<<result<<endl;
    else cout<<"No missing element found : "<<endl;

}