#include <iostream>
using namespace std;

int main(){
    int t,n,k;
    long long int wi;
    cin>>t;
    while(t!=0){
        cin>>n>>k;
        if(n-k<k){
            k=n-k;
        }
        long long int arr[n]={0};
        for(int i=0;i<n;i++){
            cin>>wi;
            arr[i]=wi;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1-i;j++){
                int temp;
                if(arr[j+1]<arr[j]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        int sum1=0,sum2=0;
        for(int i=0;i<k;i++){
            sum1+=arr[i];
        }
        for(int i=k;i<n;i++){
            sum2+=arr[i];
        }

        cout<<sum2-sum1<<endl;

        t--;
    }
    return 0;
}
