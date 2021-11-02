#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("paint.in", "r", stdin);
freopen("paint.out", "w", stdout);
#endif
    
    int a, b, c,d;
    cin >> a >> b >> c >> d;
    int A[101] = {0};
    for(int i=a; i<b;i++) A[i]++;
    for(int i=c; i<d;i++) A[i]++;
    int ans = 0;
    for(int i=0;i<=100;i++){
        if(A[i] != 0) ans++;
    }
    cout << ans;

    return 0;
}