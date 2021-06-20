# Strings

<br/>

## String:

> A string can be defined as a sequence of characters enclosed within double quotes and stored in a variable.
> 
> In c++, string is represented as an object of string class.
> The string class stores the characters as a sequence of bytes and offers a functionality to access each of these characters.  

<br/>

## String vs Character Array:

> 1. Strings follow dynamic allocation, that is, more memory can be allocated at run time and as there is no pre-allocation, no memory is wasted. On the other hand,
> memory allocatio is static in character array, that is, more memory cannot be allocated at run time if required and unused memory is wasted. 
>
> 2. When it comes to implementation, character arrays are faster than strings.
>
> 3. But string class offers a number of functions that allow us to handle manifold operations on strings with ease.

<br/>

### Creating & Initializing a String:

```cpp
//Using String class constrcutors:
string str1 = "CHEF";
string str2("CODE CHEF");
string str3 = str1;
string str4(str1);
string str5(str2, 0, 4);
string str6(str1.begin(), str1.begin() + 4);
string str7(30, 'V');

//Using Character Array:
char s1[5] = "CHEF";
char s2[5] = {'C', 'H', 'E', 'F', '\0'};
```

<br/>

### Common In-built String functions:

#### 1. getline Function –
```cpp
string line;
getline(cin, line);
cout << "Entered String: "<< line;
```

#### 2. pop_back and push_back Function –
```cpp
line.pop_back();
cout << "After pop_back(): " << line;

//push_back('character_to_be_added_at_the_end_of_string')
line.push_back('x');
cout << "After push_back(): " << line;
```

#### 3. length Function –
```cpp
cout << line.length();
```
#### 4. copy Function –
```cpp
//og_string.copy(dest_string, substring_length, starting_index) 

string original = "This is a session on STRING.";
char target[8];
original.copy(target, 7, 20);
cout << "The copied char array is: " << target;
```
#### 5. swap Function –
```cpp
//first_str.swap(second_str) or second_str.swap(first_str)

cout << "Before Swapping: ";
string first = "I am First.";
string second = "Nope, I am First";
cout << "\nString1: " << first;
cout << "\nString2: " << second;

second.swap(first);

first.swap(second);

cout << "\n\nAfter Swapping: ";
cout << "\nString1: " << first;
cout << "\nString2: " << second;	
```
#### 6. reverse Function –
```cpp
//reverse(iterator_inputStart, iterator_inputEnd)

reverse(str3.begin(), str3.end());
cout << "str3: " << str3; 
```
#### 7. to lower & to upper –
```cpp
//transform(iterator_inputBegin, iterator_inputEnd, iterator_outputBegin, unary_operation)

transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
cout << "str1: " << str1;

transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
cout << "str1: " << str1;
```
#### 8. concatenation –
```cpp
//Using '+' operator:
cout << str1 + " " + str1;

//Using append function:
cout << str1.append(" Red");
cout << str1.append(str2, 0, 2);
```
#### 9. substring Function –
```cpp
// substr(starting_index, substringLength)

cout << str1.substr(10, 3);
cout << "\n" << str1.substr(10);
```
#### 10. insert Function –
```cpp
//insert(n, string_to_insert)
cout << "str2: " << str2.insert(5, "is being cooked by the ");
```
#### 11. find & rfind Function –
```cpp
//find("substring") and rfind("substring")

cout << "Index of first occurrence of \"is\": " << str2.find("is");
cout << "\nIndex of last occurrence of \"by\": " << str2.rfind("b");

//Both the functions returns string::npos (to indicate no matches) when the specified substring is not found.
//::npos is a constant static member value with the highest possible value for an element of type size_t.
```
#### 12. replace Function –
```cpp
//replace(startingIndex, numberOfCharcatersToBeReplaced, "substring")
cout << "str2: " << str2.replace(0, 4, "Pizza");
```
#### 13. erase Function –
```cpp
//erase(startingIndex, numberOfCharcatersToBeErased) 

cout << str1;
cout << "\n" << str1.erase(9, 6);
```
#### 14. clear Function –
```cpp
//stringVariable.clear();

str1.clear();
cout << str1 << "Prints a blank string.";
```
#### 15. empty Function –
```cpp
(str1.empty() == 1) ? 
cout << "String is empty." :
cout << "String is not empty.";
```

#### [Syntax for all the functions covered](syntax)

<br/>

## Problem Solved:

[Chef And Special Dishes](Dishes.cpp)

<br/>

## Secret String Problem:

[Secret String](secretString.cpp)
<br/>

## Speaker:

[Arkit Sukhadia](https://www.linkedin.com/in/arkit-sukhadia/)
