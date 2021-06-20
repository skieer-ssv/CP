// The Secret String
//
// 1. Input your Full Name (no space).
// 2. Input your roll number.
// 3. For a roll number(R) it can be represented as R = 10*i + j. 
// 	  (32 is 10*3 + 2, where i is 3 & j is 2).
// 4. Copy the contents of your name starting from ith index uptill length of 5.
// 5. Add string "proChefOfDmce" to the newly formed string to get string D.
// 6. I = find the index for 1st vowel appearance in D.
// 7. L = length of string D.
// 8. z = L * I.
// 9. Final_string is the string with starting index = (z)mod10 in D and length = 5.
// 10. Print Final_string.


#include <bits/stdc++.h>
using namespace std;
int main() {

	string name;
	int roll;

	cin>>name>>roll;

	string D = name.substr(roll/10 , 5);
	D += "proChefOfDmce";
	
	string vowel = "aeiouAEIOU";
	int L = D.length();
	int I;
	
	for (int i = 0; i < L; ++i)
	{	int t = vowel.find(D[i]);
		if (t > 0){
			I = i;
			break;
		}
	}
	
	int z = I*L;
	
	string Final_string = D.substr(z%10, 5);
	cout << Final_string;
	return 0;
}

