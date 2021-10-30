#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s1, s2;
    cin >> s1 >> s2;
    if(s1==s2) cout << -1 << endl;
    else cout << max(s1.size(), s2.size());

    return 0;
}