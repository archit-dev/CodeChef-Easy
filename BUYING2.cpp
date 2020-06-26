#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n,x,total=0;
        cin>>n>>x;
        vector <int> v;
        for(int i=0; i < n ; i ++){
            int y;
            cin>>y;
            total+=y;
            v.push_back(y);
        }
        int ans = total/x;
        bool boolean = true;
        for (auto i : v){
            if((total-i)/x==ans){
                boolean  = false;
                break;
            }
        }
        if(boolean){
            cout<<ans<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }
    return 0;
}
