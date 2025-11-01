#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5};
    // ivec has six elements; each is a copy of the corresponding element in int_arr

    vector<int> copyVector(begin(arr), end(arr));

 
    for(size_t i = 0; i<copyVector.size(); i++)
    {
        cout << copyVector[i] << " ";
    }

    return 0;
}
