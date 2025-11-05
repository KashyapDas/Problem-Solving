#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int ia[] = {0,2,6,8}; // array with 5 elements of type int
    int i = ia[2]; // ia is converted to a pointer to the first element in ia
                  // P points to the first element to which (ia + 2) points

    int *p = ia;  // p points to the first element indexed by 2
    int i1 = *(p + 2); // equivalent to i = ia[2]

    int *p1 = &ia[2]; // p points to the element indexed by 2
    int j = p1[1]; // p[1] is equivalent *(p + 1),
                  // p[1] is the same element as ia[3]
    int k = p1[-2]; // p[-2] is the same element as ia [0]

    cout << i << "\n" << i1 << "\n" << *p << "\n" << *p1
    << "\n" << j << "\n" << k;
    return 0;
}
