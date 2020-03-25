#include <iostream>

using namespace std;
int main(){
    int t,n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++){
        cin>>t;
        arr[i]=t;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        //cin>>t;
        sum+=arr[i];
    }
    int nterms=(n*(n+1))/2;
    if(nterms==sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
