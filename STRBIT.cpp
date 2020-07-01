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
#define ll long long

using namespace std;

int main(){
 

	int t;
	cin>>t;
	while(t--){
		int slen,k;
		cin>>slen>>k;
		string s;
		cin>>s;
		vector<int> sum;
		for(int i=0;i<slen;i++)
		{
			sum.push_back(0);
		}
		int ans=0;
		for(int i=0;i<slen;i++){
			sum[i]+=sum[i-1<0 ? 0: i-1];
			if(s[i]=='G' && sum[i]%2!=0){
				ans+=1;
				sum[i]+=1;
				sum[min(slen,i+k)]-=1;
			}
			else if(s[i]=='R' && sum[i]%2==0){
				ans+=1;
				sum[i]+=1;
				sum[min(slen,i+k)]-=1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
