#include <bits/stdc++.h>  
using namespace std;


void multiply(vector<int> &a, int no, int &size){
    int carry = 0;
    for(int i=0; i<size; i++){
        int product = a[i] * no + carry;
        a[i] = product % 10;
        carry = product/10;
    }

    // to hanlde the carry
    while(carry){
        a[size] = carry % 10;
        carry = carry/10;
        size++;
    }
}

void bigFactorial(int n){
    vector<int> a(1000, 0);
    a[0] = 1;
    int size = 1;

    for(int i=2; i<=n; i++){
        multiply(a, i, size);
    }

    // print in reverse order
    for(int i=size-1; i>=0; i--){
        cout << a[i];
    }

}
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    int n;
    cin >> n;
    bigFactorial(n);
    
}