#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <cmath>
#include <climits>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		int n,diff=INT_MAX;
		cin>>n;
		for(int i=1;i<=sqrt(n);i++){
			int j=n/i;
			if(i*j==n){
				diff=min(diff,abs(j-i));
			}
		}
		cout<<diff<<endl;
	}
	return 0;
}
