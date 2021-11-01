#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int arr[5];
    for(int i=1; i<5;i++){
        cin >> arr[i];
    }
    string s;
    int ans = 0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        int x = s[i] - '0';
        ans +=  arr[x];
    }
     cout << ans;
    return 0;
}