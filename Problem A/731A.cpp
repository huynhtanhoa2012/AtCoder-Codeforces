#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s;
    cin >> s;
    int ans = 0;
    char current = 'a';
    for(int i=0; i< s.size(); i++){
        int x = abs(s[i] - current);
        ans += min(x, 26-x);
        current = s[i];
    }

    cout << ans << endl;
    
    
    
    return 0;
}