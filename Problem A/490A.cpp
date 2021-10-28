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

    int x;
    vector<int> a[4];
    for(int i=1; i<=n; i++){
        cin >> x;
        a[x].push_back(i);
    }
    int ans = 0;
    ans = min(a[1].size(), min(a[2].size(), a[3].size()));
    cout << ans << endl;
    for(int i=0; i<ans; i++){
        cout << a[1][i] <<" "<< a[2][i]<<" " << a[3][i] << endl;
    }
    


    return 0;
}