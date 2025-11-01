// check weather a string is palindrome or not 

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int PlaindromeCheck(string& arr)
{
    int st = 0;
    int ed = arr.length()-1;
    while(st<ed)
    {   
        if(arr[st]!=arr[ed]){
            return -1;
        }
        st++;
        ed--;
    }
    return 1;
}

int main()
{
    string arr = "Raar";

    for(size_t i=0; i<arr.length(); i++)
    {
        arr[i] = std::toupper(arr[i]);
    }


    int result = PlaindromeCheck(arr);
    if(result>0) cout<<"It's Palindrome..."<<endl;
    else cout<<"Not a palindrom"<<endl;
    return 0;
}