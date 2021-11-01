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
    char s[400][400];
    bool YES = true;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(i==j || i==n-j-1){
                if(s[i][j] != s[0][0] || s[i][j] == s[0][1]) YES = false;
            }
            else{
                if(s[i][j] != s[0][1] || s[i][j] == s[0][0]) YES = false;
            }
        }
    }
    if(YES) cout << "YES";
    else cout << "NO";
    

    return 0;
}