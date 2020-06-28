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
		long long a,b,c,d;
		cin>>a>>b;
		if(b==0){
		    cout<<"0 "<<a<<endl;
		}
		else{
		c=a/b;
		d=a%b;
		cout<<c<<" "<<d<<endl;}
	}
	return 0;
}
