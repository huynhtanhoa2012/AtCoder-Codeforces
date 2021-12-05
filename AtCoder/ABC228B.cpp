#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, x;
    cin >> n >> x;
    vector<int> A;
    bool visited[n] = {false};
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        A.push_back(a);
    }

    int temp = x - 1;
    int cnt = 0;
    while(!visited[temp]){
        visited[temp] = true;
        cnt++;
        temp = A[temp] - 1;
    }

    cout << cnt;
}