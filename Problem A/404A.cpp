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
    vector<string> s(n);
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin >> s[i][j];
        }
    }
    bool check = true;
    for(int i=0;i<n;i++){
        int l = 0;
        int r = n-1;
        while(l<=r){
            if(s[i][l] != s[i][r]){
                check = false;
            }
            l++;
            r--;
        }
    }
    if(check) cout << "YES";
    else cout << "NO";

    return 0;
}