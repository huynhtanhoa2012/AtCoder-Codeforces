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






























## Divisibility and Modular Arithmetic

Division of an integer by a positive integer produces `a quotient` and `a remainder`. Working with these remainders
leads to modular arithmetic

### Division
When one integer is divided by a second non-zero integer, the quotient may or may not be an integer. 

For example:
> 12/3 = 4 is an integer, whereas 11/4 = 2.75 is not. 

#### Definition 1
> If a and b are integers with a != 0

> we say that `a divides b` if there is an integer `c` such that `b = ac`

> When a divides b we say that a is a `factor` or `divisor` of b. b is a `multiple` of a. The notation `a | b` denotes that a divides b

> We can express `a | b` using quantifiers as `∃c(ac = b)`

Example 1:
> Determine whether `3 | 7` and whether `3 | 12` ?.

> We see that `3 is not | 7`, because `7/3` is not an integer. On the other hand, `3 | 12` because 12/3 = 4.

Example 2:

Let `n` and `d` be positive integers. How many positive integers **not exceeding n** are divisible by d?
> The positive integers divisible by `d` are all the integers of the form `dk`, where `k` is a positive integer.

> Hence, the number of positive integers divisible by `d` that do not exceed `n` equals the number of integers k with `0 < dk ≤ n`, or with `0 < k ≤ n/d`. Therefore, there are `n/d` positive integers not exceeding `n` that are divisible by `d`.

### Theorem 1
Let `a, b and c` be integers and `a != 0` Then: 
1. if a | b and a | c, then a | (b + c);
2. if a | b, then a | bc for all integers c;
3. if a | b and b | c, then a | c.


<img src="Photos/divisor.png" width="400">

The divisor is any number that divides another number. A factor, however, is a divisor that divides the number **entirely and leaves no remainder**. 

So, all factors of a number are its divisors. But not all divisors will be factors.

> `q` is called the quotient, and `r` is called the remainder. 

> q = a **div** d, r = a **mod** d

## Representations of integers

<img src="Photos/binary.png" width="700">

## Primes and Greatest Common Divisors

### Primes
An integer p greater than 1 is called **prime** if the only positive factors of `p` are `1` and `p`.
A positive integer that is greater than 1 and is not prime is called composite.

#### Theorem 1
An integer p greater than 1 is called prime if the only positive factors of p are 1 and p.
A positive integer that is greater than 1 and is not prime is called composite.

> 100 = 2 · 2 · 5 · 5 = 2252,

> 641 = 641,

> 999 = 3 · 3 · 3 · 37 = 33 · 37,

> 1024 = 2 · 2 · 2 · 2 · 2 · 2 · 2 · 2 · 2 · 2 = 210.

## Greatest COmmon divisors and Least Common Multiples
Let `a` and `b` be integers, not both zero. The largest integer `d` such that `d | a` and `d | b` is called the **greatest common divisor** of a and b. The greatest common divisor of a and b is denoted by gcd(a, b).

Example:

