#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.pop_back();
    dq.push_back(20);
    dq.emplace_front(10);
    dq.emplace_back(30);

    for(auto n : dq){
        cout<<n<<" ";
    }
    cout<<endl;

    return 0;
}