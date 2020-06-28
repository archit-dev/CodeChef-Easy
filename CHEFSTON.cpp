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

	//k/a*b
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<long long> a,b;
		vector<long long> val;
		for(long long i=0;i<n;i++){
			long long x;
			cin>>x;
			a.push_back(x);
		}
		for(long long i=0;i<n;i++){
			long long x;
			cin>>x;
			b.push_back(x);
		}
		for(long long i=0;i<n;i++){
			a[i]=k/a[i];
		}
		for(long long i=0;i<n;i++){
			val.push_back(a[i]*b[i]);
		}
		sort(val.rbegin(),val.rend());
		cout<<val[0]<<endl;
	}
	return 0;
}
