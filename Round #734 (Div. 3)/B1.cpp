#include <bits/stdc++.h>  
 
using namespace std;
 
const int L = 26;
int cnt[L];

void solve(){
    string s;
    cin >> s;
    memset(cnt, 0, sizeof(cnt));
    for (auto c : s){
        int test = cnt[0]++;
        cout <<"test: " << test << endl;
        cnt[c - 'a']++;
    } 

}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}