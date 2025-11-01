#include<iostream>
#include<string>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
    int int_arr[] = {0,1,2,3,4,5};
    // ivec has six elements; each is a copy of the corresponding element in int_arr

    vector<int> ivec(begin(int_arr), end(int_arr));
    

    for(auto i = 0; i < ivec.size(); i++)
    {
        cout << ivec[i] << " ";
    }

    return 0;
}
