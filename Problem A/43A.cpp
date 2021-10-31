#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n;
    cin >> n;
    map<string, int> m1;
    while(n--) {
        string s;
        cin >> s;
        if(m1.find(s) == m1.end()) m1.insert(pair<string, int> (s, 1));
        else m1[s]++;
    }
    int count = 0;
    string ans = "";
    for (map<string, int>::iterator it = m1.begin(); it != m1.end(); ++it) {
        if (it->second > count) {
            count = it->second;
            ans = it->first;
        }
    }
    cout << ans;
    return 0;
}