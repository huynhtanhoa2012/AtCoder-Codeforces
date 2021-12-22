#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    string n;
    cin >> n;

    string res = n;
    for(int i=n.size()-1; i>=0; i--){
        res += n[i];
    }
    cout << res;
    
    
    
    
}