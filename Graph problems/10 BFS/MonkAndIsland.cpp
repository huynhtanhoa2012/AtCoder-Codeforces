#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> islands[10001];
int visited[10001];
int dist[10001];

void bfs(int node){
    
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    dist[node] = 0;


    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int child : islands[curr]){
            if(!visited[child]){
                q.push(child);
                dist[child] = dist[curr] + 1;
                visited[child] = 1;
            }
        }

    }

}
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        for(int i=1; i<=n; i++){
            visited[i] = 0;
            islands[i].clear();
        }

        for(int i=0; i<m; i++){
            int x, y;
            cin >> x >> y;
            islands[x].push_back(y);
            islands[y].push_back(x);
        }

        bfs(1);
    
        cout << dist[n] << endl;
    }
    
}