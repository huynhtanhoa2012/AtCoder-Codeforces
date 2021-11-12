# Standard Library

## Vector

```c++

// This is create an array of 10 vector<int>
vector<int> v[10];

// Use parenthese() instead of brackets[]
vector<int> v(10);

//Check vector is non empty
if(!v.empty()) cout << "Non-empty";
```
1. Pushback adds an element to the end of vector, increasing its size by one.
```c++
for(int i = 1; i < 1000000; i *= 2) {
    v.push_back(i);
}
int elements_count = v.size();
```

2. Initialization
```c++
vector< int > v1;

vector< int > v2 = v1;
vector< int > v3(v1);   // v2 and v3 are the same

vector<int> Data(1000);
vector<string> names(20, “Unknown”);
```

3. Multimensional arrays
```c++
vector<vector<int>> Matrix;

int N, M;
vector<vector<int>> Matrix(N, vector<int>(M, -1));
```

4. When vector is **passed as a parameter** to some function, a copy of vector is actually created. It may take a lot of time and memory to create new vectors when they are not really needed.

```c++
// Never do this unluess we are sure what to do
void some_function(vector<int> v) {...}

// Instead, using this
void some_function(const vector<int> &v){...}

// If we want to change the contenst of vector
void some_function(vector<int> &v) {...}
```
5. Data manipulation
```c++

vector< int > v;
v.insert(1, 42); // Insert value 42 after the first
v.erase();
```

## Pairs
Pairs are compared first-to-second element.
```c++
template< typename T1, typename T2 > struct pair {
    T1 first;
    T2 second;
};

pair<string, pair< int,int > > P;
string s = P.first; // extract string
int x = P.second.first; // extract first int
int y = P.second.second; // extract second int
```
## Iterators
Iterators are the most general way to access data containers
```c++
#todo

// link: https://www.youtube.com/watch?v=SgcHcbQ0RCQ&ab_channel=TheCherno
```

## String
* Beware of **(s.length()-1)** on empty string because s.length() is `unsigned` and `unsigned(0) – 1` is definitely not what you are expecting!
```c++
string s = “hello”;
string
s1 = s.substr(0, 3), // “hel”
s2 = s.substr(1, 3), // “ell”
s3 = s.substr(0, s.length()-1), “hell”
s4 = s.substr(1); // “ello”
```

## Set
It’s always hard to decide which kind of container to describe first – set or map.

Consider we need a container with the following features:
* add an element, but do not allow duples [duplicates?]
* remove elements
* get count of elements (distinct elements)
* check whether elements are present in set

Add, remove and check the presence of particular element in **O(log N)**. Count elements in the set **O(1)** 
```c++
set<int> s;
for(int i = 1; i <= 100; i++) {
    s.insert(i);
    s.erase(i);
}
if(s.find(42) != s.end()) {...}
```
>  it’s impossible to take the element in set **by index**

The only way to traverse the elements of set is to use iterators.
```c++
set< int > S;

int r = 0;
for(set<int>::const_iterator it = S.begin(); it != S.end(); it++) {
    r += *it;
}
```

## Map
```c++
map< string, int > M;
M[“Top”] = 1;
M[“Coder”] = 2;
M[“SRM”] = 10;

if(M.find(“the meaning”) != M.end() && M.find(“the meaning”)->second == 42) { 
    cout << “Don’t Panic!” << endl;
}
```
