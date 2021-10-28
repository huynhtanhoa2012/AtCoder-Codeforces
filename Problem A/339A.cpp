#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    string s;
    int a[111], n;
    cin >> s;

    n = 0;
    stringstream ss(s);
    while (ss >> a[n]) n++;
    sort(a, a+n);
    for(int i=0;i<n-1;i++){
        printf("%d+", a[i]);
    }
    printf("%d\n", a[n-1]);
    return 0;
}