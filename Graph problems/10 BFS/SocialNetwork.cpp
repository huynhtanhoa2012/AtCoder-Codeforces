#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> nodes[1000001];
int visited[1000001];
int level[1000001];
int dist[1000001];

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = 1;
    dist[src] = 0;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int child : nodes[curr]){
            if(!visited[child]){
                dist[child] = dist[curr] + 1;
                q.push(child);
                visited[child] = 1;
                level[dist[child]]++;
            }
        }
    }
    
    
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, m, a, b, src, d, q;
    cin >> n >> m;

    for(int i=1; i<=m; i++){
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b]. push_back(a);
    }

    cin >> q;
    while(q--){
        cin >> src >> d;
        for(int i=0; i<=n; i++){
            level[i] = 0;
            visited[i] = 0;
        }
        bfs(src);

        cout << level[d] << endl;

    }
    
    
    
    
}