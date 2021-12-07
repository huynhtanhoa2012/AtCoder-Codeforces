#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
vector<int> nodes[100];  // representing a graph
vector<int> res;         // topological sorting array
int in_degree[100];

void kahn(int n){
    queue<int> q; // storing all nodes in degree = 0
    for(int i=1; i<=n; i++){
        if(in_degree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int curr = q.front();   // take out node from queue
        res.push_back(curr);    // step 2: push node in to topological sorting array
        q.pop();

        // step 3: Remove all edges from the node
        for(int node: nodes[curr]){
            in_degree[node]--;
            if(in_degree[node]==0){
                q.push(node);
            }
        }
    }

}

 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, m, x, y;
    cin >> n >> m;   // number of nodes and edges
    
    for(int i=1; i<=m; i++){
        cin >> x >> y;
        nodes[x].push_back(y);
        in_degree[y]++;  // add in degree
    }
    
    kahn(n);

    for(auto x: res){
        cout << x << " ";
    }
    
    
}