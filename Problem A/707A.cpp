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
    string s1;
    bool color = false;
    while(cin>>s1){
        if(s1=="C" or s1=="M" or s1=="Y"){
            color = true;
        } 
    }
    if(color) cout << "#Color";
    else cout << "#Black&White";
    
    return 0;
}