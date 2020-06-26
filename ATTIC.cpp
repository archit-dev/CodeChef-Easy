#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        string p;
        cin>>p;
        map <int,int> Map;
        bool jump=false;
        int j=0,c=0;
        for(int i=0;i<p.size();i++){
            if(p[i]=='.' && !jump){
                jump=true;
            }
            if(p[i]=='.' && jump){
                c+=1;
            }
            if(jump && ((p[i]=='#')||i == p.size()-1)){
                jump = false;
                Map[j++] = c;
                c=0;
            }
        }
        int days=0,currentCapa=0;
        for( auto i : Map){
            if( i.second > currentCapa){
                days+=1;
                currentCapa = i.second;
            }
        }
        cout<<days<<"\n";
    }
    return 0;
}
