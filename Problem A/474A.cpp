#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    cin >> x;
    string s1;
    cin >> s1;
    if(x == 'L'){
        for(int i=0; i<s1.size(); i++){
            int index = s.find(s1[i]);
            cout << s[index+1];
        }
    }
    if(x == 'R'){
        for(int i=0; i<s1.size(); i++){
            int index = s.find(s1[i]);
            cout << s[index-1];
        }
    }
    return 0;
}