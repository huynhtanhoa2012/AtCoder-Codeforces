# Number theory

# 1. Modular Arithmetic
When one number is divided by another, the modulo operation finds the remainder. It is denoted by the % symbol.

**Properties** 
>(x + y) mod m = (x mod m + y mod m) mod m
>
>(x - y) mod m = (x mod m - y mod m) mod m
>
>(x * y) mod m = (x mod m * y mod m) mod m
>
>x^n mod m = (x mod m)^n mod m

## When are these Properties used
Assume that `a=10^18 , b=10^18 and c=10^9 + 7`. You have to find `(a*b)%c`;

When you multiply a with b, the answer is `10^36`, which does not conform with the standard integer data types. Therefore, avoid this we used the properties.
> (a * b)%c = ((a%c) * (b%c)) % c = (49 * 49) % (10^9 + 7) = 2401


## Modular exponentiation
Exponentiation is a mathematical operation that is expressed as `x^n` and computed as `x^n = x * x * x * x  n( times)`.

### Basic Method
the most basic solution is broken down into small problems.

> x^n = x * x^(n-1) = x * x * x^(n-2)
>
> when n = 0; x = 1

```c++
int recursivePower(int x, int n){
    if (n==0) return 1;
    return x * recursivePower(x, n-1)
}
```
```c++
int iterativePower(int x, int n){
    int result =1;
    while(n>0){
        result = result * x;
        n--;
    }
    return result;
}
```
**Time Complexity: O(n)**
> However, wheere n can be as large as 10^18, this solution will not be suitable

### Optimized Method
Apply the basis of **Binary Exponentiation** relies on whether n is odd or even.

**If n is even**
> x^n = (x^2)^(n/2)

**If n is odd**

try and convert it into an even value
> x^n = x * x^(n-1)   | This ensures n-1 is even

Examples:

>3^10 => (3^2)^5 => 9^5   (10 is even)
>
>9^5  => => 9 * 9^4 => 9 * (9^2)^2 => 9*(81^2)

```c++
int binaryExponentiation(int x, int n){
    if(n==0) return 1;
    else if (n%2==0){
        return binaryExponentiation(x*x,n/2);
    }
    else 
        return x*binaryExponentiation(x*x,(n-1)/2);
}
```
**Time Complexity: O(log n)**

> However storing answers that are too large for their respective datatypes is an issue with this method. In such instances, you must use modulus (%)

```c++
int modularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)    
        return modularExponentiation((x*x)%M,n/2,M);
    else                      
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
```
**Time Complexity: O(log n)**
**Memory complexity: O(log N)**

# 2. Greatest Common Divisor (GCD)
The GCD of two or more numbers is the largest positive number that divides all the numbers that are considered.

## Naive approach
Traverse all the numbers from min(A,B) to 1 and check whether the current divides both A and B. If yes, it is the GCD of A and B.

```c++
int GCD(int A, int B) {
    int m = min(A, B), gcd;
    for(int i = m; i > 0; --i)
        if(A % i == 0 && B % i == 0) {
            gcd = i;
            return gcd;
        }
}
```
**Time Complexity: O(min(A, B))**
## Euclid's algorithm
The idea behind this algorithm is GCD(A,B) = GCD(B, A%B). It will recurse until A%B = 0.
```c++
int GCD(int A, int B) {
    if(A<B) swap(A,B);
    if(B==0) return A;
    else
        return GCD(B, A % B);
}
```
**Time Complexity: O(log(max(A, B)))**



# 3. Primality - Prime number
Primality test is to determine whether the input integer is a prime number of not.

Example:
> Input: 5   output: true
>
> Input: 12  output: false


## Naive Approach
```c++
bool isPrime(int n){
    if(n==1){
        return false;
    }
       
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
```
**Complexity: O(n)**

## Better Approach
All divisors of a number N occur in pairs of (a,b):   `a*b= N`

Example:
> 12 has the following divisors d = 1, 2, 3, 4, 6, 12
>
> Pairs are: (1, 12), (2, 6), (3, 4)

**Claim: for a divisor pair(a,b) one of them lies below sqrt(N) and other lies above**

Proof: There would be 3 cases:
* Case 1: both a and b are below sqrt(N)
* Case 2: both a and b are above sqrt(N)
* Case 3: one is below sqrt(N) and above sqrt(N)

#### Case 1: Both a and b are below sqrt(N)
> Let's assume that this statement is true, hence
>
> a<sqrt(N) and b<sqrt(N) but then a*b < N
>
> Which contracdicts the fact that a*b=N Hence, case 1 is not true
#### Case 2: Similar to case 1
#### Case 3: One is below sqrt(N) and above sqrt(N)

```c++
bool isPrime(int n){
    if(n==1){
        return false;
    }
    
    // i*i<=N  <=> i<=sqrt(N)
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
```
**Complexity: O(sqrt(N))**


# 4. Sieve of Eratosthenes

We can use the *Sieve of Eratosthenes* to find all the prime numbers that are less than or equal to a given number `N` or to find out whether a number is a prime number.

The basic idea is that at each iteration one prime number is picked up and **all its multiples are eliminated**. After the elimination process is complete, all the unmarked numbers that remain are prime.

### Pseudo code
1. Mark all the numbers as prime numbers except 1
2. Traverse over each prime numbers smaller than sqrt(N)
3. For each prime number, mark its multiples as composite numbers
4. Numbers, which are not the multiples of any number, will remain marked as prime number and others will change to composite numbers.

```c++
void sieve(int N) {
        bool isPrime[N+1];
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
            if(isPrime[i] == true) {     
                // Mark all the multiples of i as composite               
                for(int j = i * i; j <= N ;j += i)
                    isPrime[j] = false;
            }
        }
    }
```
**Complexity: O(NloglogN)**


## Fast Factorization
Modification of Sieve of Eratosthenes for fast factorization

```c++
vector<int> factorize(int n) {
    vector<int> res;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}
```
## Sieve of Eratosthenes on the segment:
Sometimes you need to find all the primes that are in the range [L..R] and not in [1..N] , where R is a large number.

You are allowed to create an array of integers with size (R - L + 1)


## Euler’s totient function
Euler's Totient function is a function that is related to getting the number of numbers that are coprime to a certain number  that are less than or equal to it

Numbers `a` and `b` are coprime if gcd(a,b) = 1.

For example: 
> ϕ(12) = 4, because 1, 5, 7 and 11 are coprime to 12.

```c++
int findCoprime(int n)
{
    int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
```


















