# Range queries
Typeical range queries are:
* **sum(a,b)**: sum of values in range[a,b]
* **min(a,b)**: minimum value in range[a,b]
* **max(a,b)**: maximum value in range[a,b]

## Naive approach
```c++
int sum(int a, int b){
    int sum = 0;
    for(int i=a; a<=b; a++){
        sum += arr[i];
    }
    return sum;
}
```
**Complexity: O(n)**
> However when a and b are large, this approach is slow.

## 1. Static array queries approach
When the array is static (the array values are never updated between the queries)
### Prefix Sum (Sum queries)

sum(a,b) = sum(0,b) - sum(0,a-1)