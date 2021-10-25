#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
 
void solve(){
    string x;
    int c[27];

    cin >> x;
	for(int i=0;i<26;++i){
        c[x[i]-'a']=i+1;
    } 

    int n;
    cin >> n;
    vector<string> s(n);
    for(auto &it: s) cin >> it;
    


	// for(int i=0;i<n;++i) scanf("%s",s[i]);
	// for(int i=0;i<n;++i){
	// 	int l=strlen(s[i]);
	// 	ll x=0;
	// 	for(int j=0;j<l;++j)
	// 		x=(x*27)+c[s[i][j]-'a'];
	// 	for(int j=l;j<10;++j)
	// 		x*=27;
	// 	P[i].first=x,P[i].second=i;
	// }
	// sort(P,P+n);
	// for(int i=0;i<n;++i)
	// 	printf("%s\n",s[P[i].second]);
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    solve();
    return 0;
}