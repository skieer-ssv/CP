//  A string can be defined as a sequence of characters enclosed within double quotes and stored in a variable.  
//  In c++, string is represented as an object of string class.
//  The string class stores the characters as a sequence of bytes and offers a functionality to access each of these characters.  

#include<bits/stdc++.h>
using namespace std;
int main(){


//Creating & Initializing a String:

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

//Printing strings to console
cout << "str1: " << str1;
cout << "\nstr2: " << str2;
cout << "\nstr3: " << str3;
cout << "\nstr4: " << str4;
cout << "\nstr5: " << str5;
cout << "\nstr6: " << str6;
cout << "\nstr7: " << str7;
cout << "\ns1: " << s1;
cout << "\ns2: " << s2;

// Common In-built String functions:

// 1. getline Function –

string line;
getline(cin, line);
cout << "\n\nEntered String: " << line;


// 2. pop_back and push_back Function –

line.pop_back();
cout << "\n\nAfter pop_back(): " << line;

//push_back('character_to_be_added_at_the_end_of_string')
line.push_back('x');
cout << "\nAfter push_back(): " << line;


// 3. length Function –

cout << line.length();


// 4. copy Function –

//og_string.copy(dest_string, substring_length, starting_index) 

string original = "This is a session on STRING.";
char target[8];
original.copy(target, 7, 20);
cout << "\n\nThe copied char array is: " << target;

// 5. swap Function –

//first_str.swap(second_str) or second_str.swap(first_str)

cout << "\n\nBefore Swapping: ";
string first = "I am First.";
string second = "Nope, I am First";
cout << "\nString1: " << first;
cout << "\nString2: " << second;

second.swap(first);

first.swap(second);

cout << "\n\nAfter Swapping: ";
cout << "\nString1: " << first;
cout << "\nString2: " << second;	


// 6. reverse Function –

//reverse(iterator_inputStart, iterator_inputEnd)

reverse(str3.begin(), str3.end());
cout << "\n\nstr3: " << str3; 


// 7. to lower & to upper –

//transform(iterator_inputBegin, iterator_inputEnd, iterator_outputBegin, unary_operation)

transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
cout << "\n\nstr1: " << str1;

transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
cout << "\nstr1: " << str1;


// 8. concatenation –

//Using '+' operator:
cout << "\n\nUsing '+' operator: \n" << str1 + " " + str1;

//Using append function:
cout << "\n\nUsing append func: \n" << str1.append(" Red");
cout << "\n" << str1.append(str2, 0, 2);


// 9. substring Function –

// substr(starting_index, substringLength)

cout << "\n\n" << str1.substr(5, 3);
cout << "\n" << str1.substr(5);


// 10. insert Function –

//insert(n, string_to_insert)
cout << "\n\nBefore execution, str2: "<< str2;
cout << "\nstr2: " << str2.insert(5, "is being cooked by the ");


// 11. find & rfind Function –

//find("substring") and rfind("substring")

cout << "\n\nIndex of first occurrence of \"is\": " << str2.find("is");
cout << "\nIndex of last occurrence of \"by\": " << str2.rfind("b");

//Both the functions returns string::npos (to indicate no matches) when the specified substring is not found.
//::npos is a constant static member value with the highest possible value for an element of type size_t.


// 12. replace Function –

//replace(startingIndex, numberOfCharcatersToBeReplaced, "substring")
cout << "\n\nstr2: " << str2.replace(0, 4, "Pizza");


// 13. erase Function –

//erase(startingIndex, numberOfCharcatersToBeErased) 

cout << "\n\n" << str1;
cout << "\n" << str1.erase(8, 2);


// 14. clear Function –

//stringVariable.clear();

str1.clear();
cout << str1 << "\n\nPrints a blank string.";


// 15. empty Function –

(str1.empty() == 1) ? 
cout << "\n\nString is empty." :
cout << "\n\nString is not empty.";


return 0;
}
