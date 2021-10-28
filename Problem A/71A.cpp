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
    while(n--) {
        string s, ans;
        cin >> s;
        int count = 0;
        int m = s.size();
        if(m>10){
            for(int i=1; i<m-1;i++){
                count++;
            }
            cout << s[0] << count << s[m-1] << endl;
        
        }else cout << s << endl;
    }
    return 0;
}