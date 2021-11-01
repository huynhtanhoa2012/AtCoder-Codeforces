#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s, t;
    cin >> s >> t;
    int pos = 0;
    for(int i=0; i<t.size(); i++){
        if(s[pos] == t[i]){
            pos++;
        }
    }
    cout << pos+1;


    return 0;
}