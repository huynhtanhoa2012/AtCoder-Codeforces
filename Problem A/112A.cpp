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
    int n = s1.size();
    for(int i=0; i<n;i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    if(s1<s2) cout << "-1" << endl;
    else if(s1>s2) cout << "1" << endl;
    else cout << "0" << endl;

    return 0;
}