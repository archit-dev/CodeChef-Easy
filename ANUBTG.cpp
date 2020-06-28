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
		vector<int> v;
		for(int i=0;i<n;i++){
			int c;
			cin>>c;
			v.push_back(c);
		}
		sort(v.rbegin(),v.rend());
		
		long long ans=0;
		for(int i=0;i<n;i++){
			if(i%4==0 || i%4==1){
				ans+=v[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
