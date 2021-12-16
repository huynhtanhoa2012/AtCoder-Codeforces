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
    
    string x, ans;
    cin >> x;

    for(int i=0; i<x.length(); i++){
        if(x[0]=='9'){
            ans.push_back('9');
        }
        else if((x[i]-'0')>4){
            int y = 9 - (x[i]-'0');
            ans.push_back(y+'0');
        }
        else {
            ans.push_back(x[i]);
        }
    }   
    
    cout << ans << endl;
    
    
    
}