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
        int numInv=0, numLocal=0;
        for(int i = 0 ; i < n ; i ++){
            for(int j = i+1; j < n ; j++){
                if(v[i]>v[j]){
                    numInv+=1;
                }
            }
        }
        for(int i  = 0 ; i < n-1 ; i++){
            if(v[i] > v[i+1]){
                numLocal+=1;
            }
        }
        if(numLocal == numInv){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
