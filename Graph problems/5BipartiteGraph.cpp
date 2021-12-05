#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;

int visited[100001];
int colors[100001];
 
bool dfs(int v, int color, vector<int> *students){
    visited[v] = 1;
    colors[v] = color;

    for(int child: students[v]){
        if(!visited[child]){
            if(dfs(child, color^1, students) == false){
                return false;
            }
        }
        else if(colors[v] == colors[child]){
            return false;
        }
    }
    return true;
}


int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> students[n+1];
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;

        students[a].push_back(b);
        students[b].push_back(a);
    }

    bool check = true;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            check = dfs(i, 1, students);
        }
        if(!check) break;
    }

    if(check){
        for(int i=1; i<=n; i++){
            cout << colors[i] +1 <<" "; 
        }
    }
    else cout << "IMPOSSIBLE";
    
    
}