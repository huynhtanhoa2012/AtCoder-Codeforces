#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    if(s==t) cout << "YES";
    else cout << "NO";
    
    
    
    
}