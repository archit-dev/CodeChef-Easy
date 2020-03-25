#include <iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        int wi;
        int arr[n];
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
        int sum1=0;
        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }
        std::cout << sum1-n*arr[0] << std::endl;
        t--;
    }
    return 0;
}
