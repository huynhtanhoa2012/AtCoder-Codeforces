#include <bits/stdc++.h>  
 
using namespace std;
const int inf = 1000000000; // 10^9
typedef long long ll;
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i=0; i<n; i++){
        cin >> cards[i];
    }
    int pointsAlice = 0, pointsBob = 0;
    
    sort(cards.begin(), cards.end(), ::greater<int>());

    for(int i=0; i<n; i++){
        if(i%2==0) pointsAlice +=  cards[i];
        else pointsBob += cards[i];
    }

    cout <<  pointsAlice - pointsBob << endl;

    
    
    
}