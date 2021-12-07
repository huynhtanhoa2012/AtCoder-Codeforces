#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> nodes[100001];      // representing a graph
int in_degree[100001];
vector<int> res;                // topological-sorting array

bool kahn(int n){

    // need to be lexographically order
    priority_queue<int, vector<int>, greater<int>> q;

    // step 1: choose all the node which having in degree = 0
    for(int i=1; i<=n; i++){
        if(in_degree[i]==0){
            q.push(i);
        }
    }

    // step 2: add that node into topological sorting array
    while(!q.empty()){
        int curr = q.top();
        q.pop();
        res.push_back(curr);
        
        for(int child: nodes[curr]){
            in_degree[child]--;
            if(in_degree[child]==0){
                q.push(child);
            }
        }
    }
    if(res.size() < n) return false;
    else return true;
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, m, x, y;
    cin >> n >> m;

    for(int i=1; i<=m; i++){
        cin >> x >> y;
        nodes[x].push_back(y);
        in_degree[y]++;
    }    

    if(!kahn(n)) cout << "Sandro fails.";
    else{
        for(auto x: res) cout << x <<" ";
    }
}