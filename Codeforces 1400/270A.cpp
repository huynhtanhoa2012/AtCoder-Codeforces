#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(360 %(180-a) == 0) cout << "Yes" << endl;
        else cout << "No" << endl;   
    }
}