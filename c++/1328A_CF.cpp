#include<iostream>
using namespace std;
 
int main(){
    int n,a,b;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        cout << (a%b ? (b - (a % b )) % b : 0) << "\n";
    }
 
    return 0;
 
}