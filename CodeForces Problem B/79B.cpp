#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    char field[n+1][m+1];
    
    // Step 1: add waste cells
    while(k--){
        int x, y;
        cin >> x >> y;
        field[x][y] = '-';
    }

    // Step 2: add crop plants
    int plants = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(field[i][j] != '-'){
                if(plants%3 == 0){
                    field[i][j] = 'C';
                    plants++;
                }
                else if(plants%3 == 1){
                    field[i][j] = 'K';
                    plants++;
                }
                else{
                    field[i][j] = 'G';
                    plants++;
                } 
            }
        }
    }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         cout << field[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    while(t--){
        int x, y;
        cin >> x >> y;
        char ans = field[x][y];
        if(ans == 'C') cout << "Carrots" << endl;
        else if(ans == 'K') cout << "Kiwis" << endl;
        else if(ans == 'G') cout << "Grapes" << endl;
        else cout << "Waste" << endl;
    }
    
    
    
    
}