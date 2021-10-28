#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, k;
    cin >>n >> k;
    string s = "a";
    int count=0;
    for(int i=1;i<n;i++){
        count += 1;
        if (count == k){
            count = 0;
        }
        s += char(s[0]+count);
    }
    cout << s;

    return 0;
}