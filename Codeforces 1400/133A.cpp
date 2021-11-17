#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    string res = "NO";
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'H' or s[i] == 'Q' or s[i] == '9'){
            res = "YES";
            break;
        } 
    }
    cout << res;
}