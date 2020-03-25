#include <iostream>
using namespace std;
int main(){

    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        int arr[n];
        int c;
        for(int i=0;i<n;i++){
            cin>>c;
            arr[i]=c;
        }
        int count=1,max=arr[0];
        for(int i=1;i<n;i++){
            if(max>=arr[i]){
                max=arr[i];
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}
