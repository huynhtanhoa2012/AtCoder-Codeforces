# Number theory

## Primality 
Primality test is to determine whether the input integer is a prime number of not.

Example:
> Input: 5   output: true
>
> Input: 12  output: false


### Naive Approach
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

### Better Approach
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


# Sieve of Eratosthenes

## Why we need Sieve
The idea behind is this: A number is prime, if none of the smaller prime numbers divides it

> Preprocessing Time: O(N log(logN))
>
> Answers Query: O(1)
>
> Extra Space: O(N)
```c++
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
```
# Prime Factorization
The process of writing a number as the product of prime numbers is **prime factorization.**

```c++
void primeFactorization(int n){
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            int count = 0;
            while(n%i == 0){
                count++;
                n /= i;
            }
            cout << i << "^" << count << endl;
        }
    }
}
```
```c++
vector<int> factors(int n) {
    vector<int> f;
    for (int x = 2; x*x <= n; x++) {
        while (n%x == 0) {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1) f.push_back(n);
    return f;
}
```
 >Note that each prime factor appears in the vector as many times as it divides the number. For example, 24 = 2^3·3, so the result of the function is `[2,2,2,3]`.


# Euclid’s algorithm

* *The greatest common divisor* of a and b, `gcd(a,b)`, is the greatest number that divides both a and b, 

* *The least common multiple* of a and b, `lcm(a,b)`, is the smallest number that is divisible by both a and b. 

For example:

> gcd(24,36) = 12 and lcm(24,36) = 72.

### Algorithm
> gcd(a, b) = a | b = 0 
> 
> gcd(a, b) = gcd(b, a mod b) | b != 0

For example:
> gcd(24,36) = gcd(36,24) = gcd(24,12) = gcd(12,0) = 12

```c++
int gcd(int a, int b) {
    if(b > a) swap(a,b);
    if (b == 0) return a;
    return gcd(b, a%b);
}
```
## Euler’s totient function
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

# Modular arithmetic 


















