#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

vector<int> nodes[10001];
int visited[10001];

int maxD, maxNode;
void dfs(int node, int d){
    visited[node] = 1;

    if(d>maxD){
        maxD = d;
        maxNode = node;
    } 

    for(int child : nodes[node]){
        if(!visited[child]){
            dfs(child, d+1);
        }
    }
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, a, b;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        nodes[a].push_back(b);
        nodes[b].push_back(a);
    }
    maxD = -1;
    dfs(1, 0);


    // clear visited array
    for(int i=1; i<=n; i++) {
        visited[i] = 0;
    }
    maxD = -1;
    dfs(maxNode, 0);
    cout << maxD;
}