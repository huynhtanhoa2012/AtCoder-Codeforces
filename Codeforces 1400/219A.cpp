#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int k;
    string s;
    vector<int> s1(10,0);
    cin >> k >> s;
    int n = s.size();

    for(int i=0; i<n; i++){
        s1[s[i]]++;
    }
    cout << s1.size() << endl;
    // for(int i=0; i<n; i++){
    //     cout << s1[i];
    // }
    
    
    
    
}