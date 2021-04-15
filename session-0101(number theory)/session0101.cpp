// session0101.cpp
// @SiddhantVispute
#include<bits/stdc++.h>
#define ll long long
#define deb(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
using namespace std;
int mod=1000000007;

// cp
//.....modulus............
//modulus is used to limit the ans uptill a certain given value i.e. 10 in the case below
// 1234%10=4

// (a*b)%m= (a%m * b%m)%m
// (a+b)%m=(a%m + b%m)%m
// (a-b)%m=(a%m - b%m)%m
// (a/b)

// int main(){
// int a=3312;
// cout<<(a*12)%10;	
// 	return 0;
// }


//........exponentiation......

// 33^59 -> 33*33*33.....59 times
// result=1
// for(exp)
// {
// result*=base;
// }

// convert 59 into binary form
// 59=(111011)2= (1*2^5) + (1*2^4) + (1*2^3) + (0*2^2) + (1*2^1) + (1*2^0)
// 59= (1*32) + (1*16) + (1*8) + (0*4) + (1*2) + (1*1)

// a^m * a^n =a^(m+n) ......identity of indices

// 33^59= 33^((1*32) + (1*16) + (1*8) + (0*4) + (1*2) + (1*1))
// =33^(1*32) * 33^(1*16) * 33^(1*8) * 33^(0*4) * 33^(1*2) * 33^(1*1)

// x=33
// x=x*x=33*33
// x=x*x=33*33*33*33
// x=x*x=33*33*33*33*33*33*33*33
// x=x*x=33*33*33*33*33*33*33*33*33*33*33*33*33*33*33*33
// x=x*x=33^32

// exp=111011 -->011101
// 	000001

// >> rightward shift operator

// & returns true only if both are high	

// 33^1023 --> 11th bit is 1024....... so only 10 iterations needed 

void power(int base,int exp){
	int result=1;
	while(exp>0){
		if(exp & 1){
			result=((ll)result*base)%mod;
		}
		base=((ll)base*base)%mod;
		exp=exp>>1;
	}
	cout<<"ans is: "<<result%mod;
}


// int main(){
// 	power(2,10);	
// 	return 0;
// }
// int main(){
// 	int n=100;
// 	if (100 & 1)	cout<<"Hello";
// 	else {cout<<"Chefs";}
// 	return 0;
// }







//..................gcd...........


//O(min(a,b)) cause after iterations will start from the min value uptill 0
int gcd(int a, int b){
	int m=min(a,b);
	for(int i=m;i>0;--i){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}

// gcd(a,b)=gcd(b,a%b)

// O(log(min(a,b))) cause after first modulus it will obviously be less than the number its modulused(I don't know whether that is even a word) with
int euclidgcd(int a, int b){
	deb(a,b);
	if(b==0)
		return a;
	else {
		return euclidgcd(b,a%b);
	}
}

// int main(){
// 	int a=-11;
// 	int n=a%7;
// 		cout<<n
// 		;
// 	return 0;
// }




// //................lcm................

// a*b=lcm(a,b)*gcd(a,b)
// lcm(a,b)=(a*b)/gcd(a,b)


int lcm(int a, int b){
	return (a*b)/euclidgcd(a,b);
}



//check whether a number is prime
// n times VS root(n)/6
bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; //check for 2 and 3
    if (n%2 == 0 || n%3 == 0) return false; //check for multiples of 2 and 3
  
    for (int i=5; i*i<=n; i=i+6) //increment by 6  and check for the number itself and number+2 for prime
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}

//Find prime numbers before n
void findPrimeNumbers(int n){
	for(int i=2;i<n;++i){
		if (checkPrime(i)==true) cout<<i<<'\n';
	}
}

//.....................................
//sieve of eratosthenes

bool *isPrime;

void sieve(int n){
isPrime=new bool[n+1]; 
memset(isPrime,1,sizeof(bool)*(n+1));//mark all indexes as true
isPrime[0]=0;isPrime[1]=0;
for(int i=2;i<n;++i){
	if(isPrime[i]){// check if isPrime[i]==true;
		for(int j=i*i;j<=n;j+=i) isPrime[j]=0;// mark all the multiples of i as false
	}
}
for(int i=0;i<=n;++i) if(isPrime[i]) cout<<i<<'\n';
}





