#include<iostream>
#include<string>
#include<vector>

using namespace std;

inline const string &
shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

int main()
{
        string a,b;
        cout << "Enter the 1st string: \n";
        cin >> a;

        cout << "Enter the 2nd string: \n";
        cin >> b;
        cout << "\n" << shorterString(a,b);

        return 0;
}
