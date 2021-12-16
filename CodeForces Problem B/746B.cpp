#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n;
    string s;
    cin >> n >> s;

    deque<char> result;
    if(n&1){
        for(int i=0; i<n; i++){
            if(i==0) result.push_back(s[i]);
            else if(i%2==1) result.push_front(s[i]);
            else result.push_back(s[i]);
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(i==0) result.push_back(s[i]);
            else if(i%2==1) result.push_back(s[i]);
            else result.push_front(s[i]);
        }
    }
    for(auto x: result){
        cout << x;
    }
    
}