#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
       set <char> s;
       for(int i=0;i<s1.size();i++){
           s.insert(s1[i]);
       }
       int count=0;
       for(int i=0;i<s2.size();i++){
           if(binary_search(s.begin(),s.end(),s2[i])){
               count+=1;
           }
       }
       cout<<count<<"\n";
    }
    return 0;
}
