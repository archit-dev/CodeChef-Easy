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

	long long a;
	cin>>a;
	if(a%3==0){
		cout<<"yes\n";
	}
	else if((a-1)%6==0){
		cout<<"yes\n";
	}
	else{
		cout<<"no\n";
	}
	return 0;
}
