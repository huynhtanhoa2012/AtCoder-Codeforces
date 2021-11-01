#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    set<int> s;
    for(int i=0;i<4;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int ans = 4 - s.size();
    cout << ans;
    return 0;
}