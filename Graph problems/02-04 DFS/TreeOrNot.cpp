#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> nodes[10001];
int visited[10001];

void dfs(int node){
    visited[node] = 1;
     
    for(int child: nodes[node]){
        if(!visited[child]){
            dfs(child);
        }
    }
}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        nodes[u].push_back(v);
        nodes[v].push_back(u);
    }

    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(visited[i] != 1){
            dfs(i);
            cnt++;
        }
    }
    if(cnt==1 and n==m+1) cout << "YES";
    else cout << "NO";
    
}