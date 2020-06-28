#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <map>
#include <cmath>
#include <climits>
#include <queue>
#define ll long long
using namespace std;

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
		int n;
		cin>>n;
		bool baseCond=false;
		vector<int> v;
		int x,prev;
		cin>>x;
		prev=x;	
		v.push_back(x);
		for(int i = 1; i < n ; i++){
			cin>>x;
			if(x>prev){
				baseCond=true;
			}
			prev=x;
			v.push_back(x);
		}
		
		if(baseCond){
			int ans = INT_MIN,min=v[0];
			for(int i=1;i<n;i++){
				if(min>v[i]){
					min=v[i];
				}
				else
					ans=max(v[i]-min,ans);
			}
			if(ans==INT_MIN){
					cout<<"UNFIT\n";
				}
				else{
					cout<<ans<<endl;
				}
		}
		else{
			cout<<"UNFIT\n";
		}
	}
	return 0;
}
