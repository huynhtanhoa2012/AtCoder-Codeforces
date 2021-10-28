#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s, s1, s2;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<s.size();i++){
        if(islower(s[i])) cnt1++;
        else cnt2++;
        s1 += toupper(s[i]);
        s2 += tolower(s[i]);
    }
    if(cnt1 < cnt2) cout << s1;
    else cout << s2;
    cout << 'A' - 'a' << endl;
    return 0;
}