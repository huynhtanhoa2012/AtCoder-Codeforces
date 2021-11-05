#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> s;
    for(int i=0; i<m;i++){
        cin >> s[i].second >> s[i].first;
    }

    cout <<"test";
    // sorted
    // sort(s.begin(), s.end());
    // reverse(s.begin(), s.end());
    // int ans = 0;
    // // for(int i=0; i<m;i++){
    // //     int take = min(n, s[i].second);
    // //     ans = take * s[i].first;
    // //     n =  n - take;
    // // }
    // cout <<" ans << ans" << endl;
    
}