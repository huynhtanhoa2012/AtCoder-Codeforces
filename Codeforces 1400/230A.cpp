#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> strengths;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        strengths.push_back( make_pair(x, y));
    }
    sort(strengths.begin(), strengths.end());
    bool check = true;
    for(int i=0; i<n; i++){
        if(s > strengths[i].first){
            s += strengths[i].second;
        }
        else check = false;
    }
    if(check) cout << "YES";
    else cout << "NO";
    
}