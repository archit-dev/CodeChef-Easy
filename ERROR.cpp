#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        bool ans=true;
        if(s.find("010")==string::npos && s.find("101")==string::npos){
            ans=false;
        }
        if(ans){
            cout<<"Good\n";
        }
        else{
            cout<<"Bad\n";
        }
    }
    return 0;
}
