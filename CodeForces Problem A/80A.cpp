#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;

bool prime(int n){
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
    int n, m;
    cin >> n >> m;
    bool yes = true;
    for(int i=n+1; i<m; i++){
        if(prime(i)) yes = false;
    }
    if(yes and prime(m)) cout << "YES";
    else cout << "NO";

    




    return 0;
}