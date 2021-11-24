# Binary Exponentiation
x^n
* if n even: x^(n/2) * x^(n/2)
* if n odd: x * x^(n-1)
* n==0: 1
```c++
pow(a, b){
    int res = 1
    while(b){
        if(b&1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}
```