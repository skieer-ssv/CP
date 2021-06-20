// Problem: Chef And Special Dishes
// Contest: CodeChef - Practice(Easy)
// URL: https://www.codechef.com/problems/CHEFSPL
// Memory Limit: 256 MB
// Time Limit: 1000 ms



#include<bits/stdc++.h>
using namespace std;

bool is_subsequence21(string dish, int n){
	int sp = (n - 1) / 2;
	int fp = n - sp;
	int j = 0;

	if(sp == 0)
		return false;

	for(int i = 0; i < fp && j < sp; ++i)
		if(dish[j + fp] == dish[i])
			j++;

	return (j == sp);	
}

bool is_subsequence12(string dish, int n){
	int fp = (n - 1) / 2;
	int sp = n - fp;
	int j = 0;

	if(fp == 0)
		return false;

	for(int i = 0; i < sp && j < fp; ++i)
		if(dish[j] == dish[i+fp])
			j++;

	return (j == fp);	
}

bool is_double(string dish, int n) {
	int h = n/ 2;

	for(int i = 0; i < h; i++)
		if(dish[i] != dish[i+h])
			return false;

	return true;	
}

bool check(string dish){
	bool flag;
	int len = dish.length();

	if(len % 2 == 0)
		flag = is_double(dish, len);
	else
		flag = (is_subsequence12(dish, len) || is_subsequence21(dish, len));



	return flag;
}


int main() {
	//d: number of dishes
	int d;
	cin >> d;

	//dish: inputted dish name
	string dish;

	while(d--){
		cin >> dish;

		(check(dish)) ?
		cout << "YES" :
		cout << "NO" ;
	}


	return 0;
}
