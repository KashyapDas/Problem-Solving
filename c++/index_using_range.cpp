#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];

    size_t cnt = 0;
    for(auto &row : ia)     // for every element in the outer array
    for(auto &col : row){   // for every element in the inner array
        col = cnt;          // give this element the next value
        ++cnt;              // increment cnt
        cout<<col<<"\t";
    }

    return 0;
}
