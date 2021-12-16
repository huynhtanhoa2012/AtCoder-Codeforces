#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;


vector<int> nodes[1000001];
int visited[1000001], cc[1000001];
int curr_cc;


void dfs(int node){
    visited[node] = 1;
    cc[node] = curr_cc;

    for(int child : nodes[node]){
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
    
    int t, n, k, a, b;
    string op;
    cin >> t;

    while(t--){
        cin >> n >> k;
        curr_cc = 0;
        vector<pair<int,int>> edgeList;

        for(int i=1; i<=n; i++){
            nodes[i].clear();
            visited[i] = 0; 
        }

        for(int i=1; i<=k; i++){
            cin >> a >> op >> b;

            if(op == "="){
                nodes[a].push_back(b);
                nodes[b].push_back(a);
            }
            else{
                edgeList.push_back({a, b});
            }
        }

        // Initialize connected component
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                curr_cc++;
                dfs(i);
            }
        }


        // Check whether 2 nodes lie on the same component
        bool flag = true;
        for(int i=0; i<edgeList.size(); i++){
            a = edgeList[i].first;
            b = edgeList[i].second;

            if(cc[a] == cc[b])
            {
                flag = false;
                break;
            }

        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }    
    
    
    
    
}