#include <iostream>
using namespace std;
int main(){

    int t,g,i,q;
    cin>>t;
    long long int n;
    while(t!=0){
        cin>>g;
        while(g!=0){
            cin>>i>>n>>q;
            if(n%2==0){
                        cout<<n/2<<endl;
                }
            else {
                    if(i!=q){
                        cout<<(n+1)/2<<endl;
                    }
                    else {
                        cout<<(n-1)/2<<endl;
                    }

            }
            g--;
        }
        t--;
    }
    return 0;
}
