#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> v;
        for(int i = 0 , x ; i < n ; i++){
            cin>>x;
            v.push_back(x);
        }
        long long ans=0;
        sort(v.rbegin(), v.rend() );
        for( int i = 0 ; i < n ; i+=2){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
