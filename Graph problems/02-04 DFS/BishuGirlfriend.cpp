#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

// global variables
vector<int> nodes[1001];
int visited[1001], dist[1001];

void dfs(int node, int d){
    visited[node] = 1;
    dist[node] = d;

    for(int child : nodes[node]){
        if(!visited[child]){
            dfs(child, dist[node] + 1);
        }
    }

}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        nodes[u].push_back(v);
        nodes[v].push_back(u);
    }
    
    // Calculate distances
    dfs(1, 0);

    int q;
    int min_dist = inf;
    int ans = 0;
    cin >> q;
    while(q--){
        int girl;
        cin >> girl;
        if(dist[girl] < min_dist){
            min_dist = dist[girl];
            ans = girl;
        }
        else if(dist[girl] == min_dist and girl < ans){
            ans = girl;
        }
    }
    cout << ans;
}