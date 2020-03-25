#include <iostream>


using namespace std;
int main(){
    int x,y,rem,k,ci,pi,n,t;
    cin>>t;
    while(t!=0){
        cin>>x>>y>>k>>n;
        int flag=0,rem=x-y;
        for(int i =0;i<n;i++){
            cin>>pi>>ci;
            if(pi>=rem&&ci<=k){
                flag=1;
                //break;
            }
        }
        if(flag==1){
            cout<<"LuckyChef"<<endl;
        }
        else if(flag==0){
            cout<<"UnluckyChef"<<endl;
        }
        t--;
    }

    return 0;
}
