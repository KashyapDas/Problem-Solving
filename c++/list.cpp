#include<bits/stdc++.h>
using namespace std;


int main()
{
    list<int> ls;
    ls.push_back(10);
    ls.pop_back();
    
    ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    ls.push_back(50);
    ls.push_back(60);

    ls.emplace_front(10);
    ls.emplace_back(70);

    for(auto n : ls)
    {
        cout<<n<<" ";
    }
    cout<<endl;


    return 0;
}