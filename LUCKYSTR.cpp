#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int k,n;
    cin>>k>>n;
    vector <string > favSubs, bStr;
    for(int i=0;i<k;i++){
    	string s;
    	cin>>s;
    	favSubs.push_back(s);
    }
    for(int i=0;i<n;i++){
    	string s;
    	cin>>s;
    	bStr.push_back(s);
    }
    bool isGood=false;
    for ( auto i : bStr){
    	isGood=false;
    	if(i.size()>=47){
    		isGood=true;
    		
    	}
    	if(!isGood){
    		for(auto x : favSubs){
	    		if(i.find(x)!=string::npos){
	    			isGood=true;
	    			break;
	    		}
    		}
    	}	
    	if(isGood){
    		cout<<"Good\n";
    	}
	    else{
	    	cout<<"Bad\n";
	    }
    }
    
	return 0;
}
