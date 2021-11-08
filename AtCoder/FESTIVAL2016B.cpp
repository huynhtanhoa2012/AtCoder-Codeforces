#include <bits/stdc++.h>  
 
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
const int inf = 1000000000; // 10^9
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int participants = 0;
    int overseaRank = 0;
    rep(i, s.size()){
        if(s[i]=='a' and participants < (a+b)){
            cout << "Yes" << endl;
            participants++;
        }
        else if(s[i]=='b' and participants < (a+b) and overseaRank < b){
            cout << "Yes" << endl;
            participants++;
            overseaRank++;
        }
        else cout << "No" << endl;
    }
}