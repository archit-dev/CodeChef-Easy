#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        long long numberOfInstructions=2,n=s[0]-'a';
        for (int i=1; i<s.size(); i++) {
            long long k = s[i]-'a';
            if(n<=k){
                numberOfInstructions+= k - n;
                n=k;
            }
            else{
                numberOfInstructions+= (26+k) - n;
                n=k;
            }
            numberOfInstructions+=1;
        }
//        cout<<numberOfInstructions<<" "<<11*s.size()<<"\t";
        if(numberOfInstructions<= 11*s.size()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
