#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

bool isNumber(char x){
	if(x<=57 && x>=49){
		return true;
	}
	return false;
}

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
    	string s;
    	cin>>s;
    	long sum=0;
    	for(int i=0;i<s.size();i++){
    		if(isNumber(s[i])){
    			sum+= s[i]-'1'+1;
    		}
    	}
    	cout<<sum<<"\n";
    }
	return 0;
}
