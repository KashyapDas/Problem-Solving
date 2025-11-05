//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int stock = INT_MAX, ans = 0;
    
        for(int price: prices) {
            if(price < stock) stock = price;
            else ans = max(ans, price - stock);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7, 8, 1, 5, 6, 9};
    cout << s.maxProfit(prices);

    return 0;
}