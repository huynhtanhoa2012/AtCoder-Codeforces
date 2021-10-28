#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
void solve(){
    int n, h;
    cin >> n >> h;
    int width = 0;
    while(n--){
        int x;
        cin >> x;
        if(x <= h) width += 1;
        else width += 2;
    }
    cout << width << endl;

}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    solve();
    return 0;
}