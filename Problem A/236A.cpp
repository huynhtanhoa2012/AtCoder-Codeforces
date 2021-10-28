#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string s1;
    cin >> s1;
    string s2 = "";
    for(int i=0; i<s1.size();i++){
        if(s2.find(s1[i]) == string::npos){
            s2 += s1[i];
        }
    }
    if(s2.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
    return 0;
}