#include <iostream>
using namespace std;

int search(int arr[],int len,int k);
int sort(int arr[],int len,int k);


int main(){
    int n,t;
    cin>>t;
    while(t!=0){
        cin>>n;
        int c;
        int arr[n]={0};
        for(int i=0;i<n;i++){
            cin>>c;
            arr[i]=c;
        }
        cin>>c;
        cout<<sort(arr,n,c)<<endl;
        t--;
    }

    return 0;
}

int search(int arr[],int len,int k){
    int low=0,high=len-1,mid;
    while(low<=high){
        mid=low+high/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(k<arr[mid]){
            high=mid-1;
        }
        else{
            low=low+1;
        }
    }
}
int sort(int arr[],int len,int k){
    int i=0,j=0;
    int prev=arr[k-1];
    for(i =0;i<len;i++){
        for(j=0;j<len-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    i=search(arr,len,prev);
    return i+1;
}
