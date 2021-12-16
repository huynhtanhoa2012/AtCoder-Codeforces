#include <bits/stdc++.h>  
#define mod 1000000007

using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> nodes[100001];
int visited[100001]; 
int cc_size;

void dfs(int node){
    visited[node] = 1;
    cc_size++;

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
    int t, n, m;
    cin >> t;

    while(t--){
        cin >> n >> m;

        for(int i=1; i<=n; i++){
            visited[i] = 0;
            nodes[i].clear();
        }

        for(int i=0; i<m; i++){
            int x, y;
            cin >> x >> y;
            nodes[x].push_back(y);
            nodes[y].push_back(x);  
        }

        int cnt = 0;
        long long int res = 1;

        for(int i=1; i<=n; i++){
            if(!visited[i]){
                cc_size = 0;
                dfs(i);
                cnt++;
                res = (res * cc_size) % mod;
            }
        }
        cout << cnt << " " << res << endl;
    }

}