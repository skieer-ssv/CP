#include <bits/stdc++.h>
using namespace std;


int main() {

    // CONDITIONALS IN CPP

    /*
     *  1. If Else-If Else
    */

    if (condition1) {
        // Code block 1
    }
    else if (condition2) {
        // Code block 2
    }
    else {
        // Code block 3
    }

    /*
     *  2. Switch Case
    */

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

    /*
     *  3. Ternary
    */

    (condition) ? statement1 : statement2;


    // LOOPS IN CPP

    /*
     *  1. If Else-If Else
    */

    for (initialization; condition; increment_decrement) {
        // Code to be executed repeatedly until the condition is false
    }


    while (condition) {
        // Code to be executed repeatedly
    }


    int t = 1;
    cin >> t;

    while (t--) {
        // CB
        cout << t << '\n';
    }

    do {
        // Code to be executed repeatedly
    } while (condition);

    datatype func_name(datatype1 arg1, datatype2 arg2) {
        return value;
    }
 
 
    return 0;
}