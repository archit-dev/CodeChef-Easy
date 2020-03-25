#include <iostream>
#define ll long long
using namespace std;

int sort(ll int arr[],int size){
    int i=0,j=0;
    int temp;
    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if( arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int min=arr[1]-arr[0];
    for(i=0;i<size-1;i++){
        if (min>arr[i+1]-arr[i]){
            min=arr[i+1]-arr[i];
        }
    }

    return min;
}

int main(){
   int t,n;
   ll int p;
  cin>>t;
   while(t!=0){
      cin>>n;
   ll int arr[n]={0};
   for(int i=0;i<n;i++){
       cin>>p;
       arr[i]=p;
   }
   cout<<sort(arr,n)<<endl;
   t--;
   }

    return 0;
}
