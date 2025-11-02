#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(0);
    st.pop();
    for(size_t i=0; i<st.size(); i++)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;


    return 0;
}