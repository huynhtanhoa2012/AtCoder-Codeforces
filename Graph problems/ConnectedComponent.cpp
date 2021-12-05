#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

 
class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }

    void addEdges(int u, int v){
        l[u].push_back(v);
    }

    void printGraph(){
        for(int i=1; i<=V; i++){
            cout << i << "-->";
            for(auto nbr: l[i]){
                cout << nbr << ",";
            }
            cout << endl;
        }
    }

    void dfs(int source, bool *visited){
        visited[source] = true;

        for(auto nbr: l[source]){
            if(!visited[nbr]){
                dfs(nbr, visited);
            }
        }
        return;
    }
};


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, e;
    cin >> n >> e;
    Graph g(n+1);

    while(e--){
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v);
    }

    // Find connected components
    int cnt = 0;
    bool visited[n];
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            g.dfs(i, visited);
            cnt++;
        }
    }
    cout << cnt << endl;
}