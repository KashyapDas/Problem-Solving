#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);
    cout<<v.back()<<endl;
    cout<<*(v.begin())<<endl;
    cout<<*(v.end()-1)<<endl;
    for(size_t i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}