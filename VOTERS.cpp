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

	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	map<int,int> voter;
	for(int i=0;i<n1;i++){
		int x;
		cin>>x;
		voter[x]+=1;
	}
	for(int i=0;i<n2;i++){
		int x;
		cin>>x;
		voter[x]+=1;
	}
	for(int i=0;i<n3;i++){
		int x;
		cin>>x;
		voter[x]+=1;
	}
	int count=0;
	vector <int> finalList;
	for(auto i:voter){
		if(i.second>=2){
			count+=1;
			finalList.push_back(i.first);
		}
	}
	sort(finalList.begin(),finalList.end());
	cout<<count<<endl;
	for ( auto i: finalList){
		cout<<i<<endl;
	}
	return 0;
}
