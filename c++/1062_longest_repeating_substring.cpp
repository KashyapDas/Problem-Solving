//#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<set>
#include<unordered_set>
using namespace std;
class solution{
    public:
    int lengthofLongestSubstring(string s){
       unordered_set<char> ss;
        int left = 0, right = 0, maxlen = 0;
        for(int right = 0; right < s.length(); right++){
            while(ss.find(s[right]) != ss.end()){
                ss.erase(s[left]);
                left++;
            }
            ss.insert(s[right]);
            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};

int main(){
    solution t;
    string s = "abcabcbb";
    string s2 = "zxyzxyz";
    string s3 = "xxxx";
    string s4 = "pwwkew";
    cout << t.lengthofLongestSubstring(s) << "\n" <<
    t.lengthofLongestSubstring(s2) << "\n" << 
    t.lengthofLongestSubstring(s3) << "\n" << 
    t.lengthofLongestSubstring(s4); 
    return 0;
}
