#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s;
    getline(cin, s);
    set<char> letters;
    for(int i=0;i < s.size();i++){
        if(isalpha(s[i])){
            letters.insert(s[i]);
        }
    }
    cout << letters.size() << endl;

    return 0;
}