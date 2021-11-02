#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int a, b, c, d;
	cin >> a >> b >> c >> d;

	int total = (b - a) + (d - c);  
	int intersection = max(min(b, d) - max(a, c), 0);
	int ans = total - intersection;

	cout << ans << "\n";
}