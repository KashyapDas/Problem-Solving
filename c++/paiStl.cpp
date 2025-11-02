#include<bits/stdc++.h>
using namespace std;


int main()
{
    pair<int, int> p1 = {10,20};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<int,int>> p2 = {10,{20,30}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int, int> arr[] = {{10,20},{30,40},{50,60}};
    cout<<arr[2].second<<endl;

    for(size_t i=0; i<sizeof(arr)/sizeof(int); i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    cout<<endl;


    return 0;
}