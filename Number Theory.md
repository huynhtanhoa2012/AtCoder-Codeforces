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
int n;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;  

for(int i= 2; i*i <= n; i++){
    if(is_prime[i]){
        for(int j = i*i; j<=n; j+=i){
            is_prime[j] = false;
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
























