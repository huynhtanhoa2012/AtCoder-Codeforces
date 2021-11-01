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
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> s1;
    for(int i=0; i< s.size(); i++){
        s1.insert(s[i]);
    }
    if(s1.size() == 26) cout << "YES" << endl;
    else cout << "NO" <<endl; 

    return 0;
}