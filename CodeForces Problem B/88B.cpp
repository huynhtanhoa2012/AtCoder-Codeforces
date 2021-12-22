#include <bits/stdc++.h>  
#define mod 1000000007
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
char keyboard[31][31];
int test = 0;

bool checkEuclidean(char c, int euclidean){
    bool res = false;
    // get location of c
    int a, b, a1, b1;
    for(int i=1; i<31; i++){
        for(int j=1; j<31; j++){
            if(keyboard[i][j] == c){
                a = i;
                b = j;
            }
        }
    }
    cout << c << endl;
    // get location of S
    for(int i=1; i<31; i++){
        for(int j=1; j<31; j++){
            if(keyboard[i][j] == 'S'){
                
                int x = abs(i-a);
                int y = abs(j-b);
                cout << x << " " << y << endl;
                if(x < euclidean and y < euclidean){
                    res = true;
                }
            }
        }
    }
    cout << endl;
    return res;
}

int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n, m, x;
    cin >> n >> m >> x;

    for(int i=1; i<=n; i++){
        string s;
        cin >> s;
        for(int j=1; j<=m; j++){
            keyboard[i][j] = s[j-1];
        }
    }
    // for(int i=1; i<31; i++){
    //     for(int j=1; j<31; j++){
    //         cout << keyboard[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    int q;
    cin >> q;
    string s1;
    cin >> s1;

    int cnt = 0;
    for(int i=0; i<q; i++){
        if(isupper(s1[i])){
            if(!checkEuclidean(tolower(s1[i]), x)){
                cnt++;
            }
        }
    }
    cout << cnt;
    
    
    
    
}