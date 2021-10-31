#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, p, q;
    cin >> n;
    
    set<int> s;
    cin >> p;
    while(p--){
        int x = 0;
        cin >> x;
        if(x!=0) s.insert(x);
    }
    cin >> q;
    while(q--){
        int x = 0;
        cin >> x;
        if(x!=0) s.insert(x);
    }
    
    if(s.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;


    return 0;
}