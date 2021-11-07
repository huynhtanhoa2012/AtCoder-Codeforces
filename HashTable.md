# Hash Table

1. Hashtable should support **Insertion, Deletion and Search** in average case **O(1)** time.
2. Hashtable is **not useful** if you want to maintain some kind of an order of the elements.

## Hash Function
Hash function will take a particular object and convert it into integer value.

> Hash Function[Object] ===> Integer Value
>
> Keys need to be converted into an intger value

## Key components
* Hash Function (Design)
* Hash Table  (Array)
* Collision Handling Scheme

## Hash Table
* A hashtable is an array fixed size 
    * It can grow based upon need
* Array elements are indexed by a key, which is mapped to an array index (0 to table size -1)
* Mapping (Hash Function)
    * h from key to index
    * h("join") = 12
### Hash table operations
* Insert
* Search
* Delete

## Collision 
* Collision can't be avoided
* but their chances can be reduces using a Good Hash Function
* If Collision happens need a strategy to handle (Open hashing/ Seperate chaining)

## Good Hash Function
* Reduces the chance of collision - Distribue keys uniformly over the table
* Should be fast to compute

## Separate Chaining
* Implemented using Linked Lists
* Key K is stored in a list a T[h(k)]
* Eg. Table size = 10
    * h(k) = k mod 10