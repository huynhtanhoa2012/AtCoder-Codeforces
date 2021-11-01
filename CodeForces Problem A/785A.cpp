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
    int ans = 0;
    while(n--) {
        string x;
        cin >> x;
        if (x == "Tetrahedron") ans += 4;
        else if (x == "Cube") ans += 6;
        else if (x == "Octahedron") ans += 8;
        else if (x == "Dodecahedron") ans += 12;
        else ans += 20;
    }
    cout << ans;
    return 0;
}