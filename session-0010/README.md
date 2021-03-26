## Competitive Programming Basics _and problem solving_

### Content:

1. [Conditionals in C++](#conditionals-in-c++)
    - [If Else-If Else](#if-else-if-else)
    - [Switch Case](#switch-case)
    - [Ternary](#ternary)
2. [Loops in C++](#loops-in-c++)
    - [For Loop](#for-loop)
    - [While Loop](#while-loop)
    - [Do While Loop](#do-while-loop)
3. [Functions in C++](#functions-in-c++)
4. [Problem Solved](#problem-solved)
    - [Solution](#solution)

### Conditionals in C++

<a href="if-else-if-else" id='if-else-if-else' aria-hidden='true'></a>

1.  If Else-If Else

    ```cpp
    if (condition1) {
        // Code block 1
    }
    else if (condition2) {
        // Code block 2
    }
    else {
        // Code block 3
    }
    ```

<a href="switch-case" id='switch-case' aria-hidden='true'></a>

2.  Switch Case:

    ```cpp
    int a = 1;

    switch (integral_expression) {
        case 0:
        case 1:
            cout << "0 or 1" << '\n';
            break;

        case 2:
            cout << 2 << '\n';
            break;

        default:
            cout << "default" << '\n';
    }
    ```

<a href="ternary" id='ternary' aria-hidden='true'></a>

3.  Ternary:

    ```cpp
    (condition) ? statement1 : statement2;
    ```

### Loops in C++

<a href="for-loop" id='for-loop' aria-hidden='true'></a>

1.  For Loop:

    ```cpp
    for (initialization; condition; increment_decrement) {
        // Code to be executed repeatedly until the condition is false
    }
    ```

<a href="while-loop" id='while-loop' aria-hidden='true'></a>

2.  While Loop:

    ```cpp
    while (condition) {
        // Code to be executed repeatedly until the condition is false
    }
    ```

    Example:

    ```cpp
    int t = 1;
    cin >> t;

    while (t--) {
        // Code to run `t` times
        cout << t << '\n';
    }

    ```

<a href="do-while-loop" id='do-while-loop' aria-hidden='true'></a>

3.  Do-While Loop:
    Do while run is guaranteed to run atlease 1 time.

    ```cpp
    do {
        // Code to be executed repeatedly until the condition is false
    } while (condition);
    ```

### Functions in C++:

Syntax:

```cpp
datatype func_name(datatype1 arg1, datatype2 arg2, ...) {
    return value;
}
```

Example:

```cpp
int mul(int a, int b) {
    return a * b;
}
```

## Problem Solved:

https://www.codechef.com/problems/ADAKNG

### Solution:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main () {
	int t = 1;
	cin >> t;

	while (t--) {
		int r, c, k, k1, k2, minNumOfSteps;
		int ans = 0;
		cin >> r >> c >> k;

		for (int i = 1; i <= 8; ++i) {
			for (int j = 1; j <= 8; ++j) {
				k1 = abs(r - i);
				k2 = abs(c - j);

				minNumOfSteps = max(k1, k2);

				if (minNumOfSteps <= k) {
					++ans;
				}
			}
		}

		cout << ans << '\n';

	}


	return 0;
}
```

## Speakers:

-   [Yash Kandalkar](https://github.com/YashKandalkar)
-   [Chaitanya Keerthi](https://www.linkedin.com/in/chaitanya-keerthi/)
