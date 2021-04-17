# Vectors and Sets

## Vectors:

> Vector is a sequence container and also known as dynamic array.
> Its size can grow and shrink dynamically, and no need to provide size at compile time.

### 1. Creating & Initializing a Vector:

```cpp
// Declarations:
vector<int> vec1;
vector<int> vec2(10);
vector<int> vec3(5, 10);
vector<int> vec4(vec2.begin(), vec2.end());
vector<int> vec5{1, 2, 3, 4, 5, 6};
```

### 2. Inserting elements:

```cpp
// Inserting using push_back:
vec1.push_back(1); // O(1)
vec1.push_back(2);
vec1.push_back(3);
vec1.push_back(4);
vec1.pop_back(); // O(1)

// Printing vector:
for (int i = 0; i < vec1.size(); i++) {
  cout << vec1.at(i) << " ";
}

cout << "\n";

// Print/accessing using for each loop
for (auto x : vec1) {
  cout << x << " ";
}
cout << "\n";

// Inserting elements in the middle
vector<int> d{1, 2, 3, 4, 5};

d.insert(d.begin() + 3, 100); // O(N)
d.insert(d.begin() + 3, 3, 100);
```

### 3. Removing Elements:

```cpp
// Erasing elements in the middle

vector<int> d{1, 2, 3, 4, 5};
d.erase(d.begin() + 2);
d.erase(d.begin() + 2, d.begin() + 5);

// Removing all elements
d.clear();

// Checking if vector is empty
if (d.empty()) {
  cout << "Empty" << "\n";
}
```

### 4. String Vectors:

```cpp
vector<string> str{"Red", "Yellow", "Green"};

str.push_back("Blue");

for (auto x : str) {
  cout << x << "\n";
}

cout << "\n";
```

### 5. Taking input:

```cpp
vector<int> v;
int n;
cin >> n;
for (int i = 0; i < n; i++) {
  int no;
  cin >> no;
  v.push_back(no);
}

// Without a new int variable
vector<int> v(n);
int n;
cin >> n;
for (auto &x : v) {
  cin >> x;
}

// When size of the vector is not known

// For 1 line:
vector<int> v1;
int input;
while (cin >> input) {
  v1.push_back(input);
}

for (auto x : v1) {
  cout << x << " ";
}

cout << "\n";

// For multiple lines:
vector<int> v;
int n;
string line;
while (getline(cin, line)) {
  istringstream iss(line);
  while (iss >> n) {
    v.push_back(n);
  }
}

for (auto x : v) {
  cout << x << " ";
}

cout << "\n";
```

### 6. Vector Methods:

```cpp
// Accessing first element of the vector
cout << d.front() << "\n";

// Accessing last element of the vector
cout << d.back() << "\n";

// Pointer to first element of the vector
cout << d.begin() << "\n";

// Poniter to the memory after  element of the vector
cout << d.end() << "\n";
```

### 7. Algorithms on Vector:

```cpp
// STL Algorithms

vector<int> vec{21, 54, 19, 93, 45, 7};

// Sorting algorithm - Introsort, best possible time complexity
sort(vec.begin(), vec.end());

// Reverse algorithm
reverse(vec.begin(), vec.end());

int maxElement = *max_element(vec.begin(), vec.end());
cout << maxElement << "\n";

int minElement = *min_element(vec.begin(), vec.end());
cout << minElement << "\n";

int sumOfVector = accumulate(vec.begin(), vec.end(), 0);
cout << sumOfVector << "\n";

int countOfElement = count(vec.begin(), vec.end(), 19);
cout << countOfElement << "\n";

if (find(vec.begin(), vec.end(), 19) != vec.end()) {
  cout << "Element found\n";
} else {
  cout << "Element not found\n";
}
```

## Sets

> Set is an associative container that contains a sorted set of unique elements.
> Insertion, Removal, Search have logarithmic complexity.

### 1. Inserting & Removing:

```cpp
set<int> s;

s.insert(2);
s.insert(3);
s.insert(4);
s.insert(2);
s.insert(2);
s.insert(9);
s.erase(9);
```

### 2. Accessing Elements:

```cpp
// Accessing elements

auto it = s.find(3);

if (it == s.end()) {
  cout << "Not found\n";
} else {
  cout << "Found\n";
}
```

### 3. Vector to Set:

```cpp
vector<int> arr{1, 2, 3, 4, 5, 6, 2, 2, 4, 4, 4, 5};

set<int> st;
for (int i = 0; i < arr.size(); i++) {
  st.insert(arr[i]);
}

for (auto x : st) {
  cout << x << " ";
}

// Expected output:
// 1 2 3 4 5 6
```

## Problem Solved:

[Chain of Doughnuts](DONUTS.cpp)

## Miscellaneous:

[FastScan Function](fastio.cpp)

## Speaker:

[Chirag Mahajan](https://www.linkedin.com/in/chirag-mahajan-877219195/)
