#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <cmath>
#include <climits>
#include <queue>
#include <stack>
#include <ctype.h>
#include <set>
#include <unordered_map>
#define ll long long
#define pb push_back
#define ArrayMaxLen 100001

using namespace std;

int computeSum(vector<int> & banknotes,int i){
	int initial=0,sum=0;
	while(i>0){
		if((i&1)==1){
			sum+=banknotes[initial];
		}
		initial+=1;
		i= (i>>1);
	}
	return sum;
}


bool possible(vector<int> & banknotes, int moneyAsked,int numberOfSubsets){
	for(int i=0;i<=numberOfSubsets;i++){
		if(computeSum(banknotes,i)==moneyAsked){
			return true;
		}
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t; 
	while(t--){
		vector<int> banknotes;
		int numberOfNotes,moneyAsked;
		cin>>numberOfNotes>>moneyAsked;
		for(int i=0;i<numberOfNotes;i++){
			int x;
			cin>>x;
			banknotes.pb(x);
		}
		int numberOfSubsets= (1<<banknotes.size()) - 1 ;
		// cout<<numberOfSubsets<<"\n";
		if(possible(banknotes,moneyAsked,numberOfSubsets)){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}

	}
	return 0;
}
