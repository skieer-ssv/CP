// Problem: Chain of Doughnuts
// Contest: CodeChef - Practice(Easy)
// URL: https://www.codechef.com/problems/DONUTS
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        vector<int> v;
        for(int i=0; i<m; i++) {
            int input;
            cin >> input;
            v.push_back(input);
        }
        int x = 0;
        sort(v.begin(), v.end());
        int i=0,j=m-1;
        while(i<j) {
            v[i]--;
            v[j]++;
            x++;
            if(v[i] == 0) {
                i++;
            }
            j--;
        }
        cout << x << "\n";
    }
    return 0;
}
