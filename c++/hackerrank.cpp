#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a,i,r[] = {},k,j;

    cin>>a;

    for(i = 0; i <= a+1; i++)
    {
        cin>>r[i];
    }

    for(i = 0; i <= a+1; i++)
    {
        cout<<r[i];
    }

    return 0;
}
