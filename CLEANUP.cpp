#include <iostream>

using namespace std;

void final(int arr[],int len,int n);
int binarySearch(int arr[], int len, int num) ;
void sort(int arr[],int len);

int main(){

    int test;
    int n,m,ip;
    cin>>test;
    while(test!=0){
        cin>>n>>m;
        int done[m];
        for(int i =0;i<m;i++){
            cin>>ip;
            done[i]=ip;
        }
        sort(done,m);
        final(done,m,n);
        test=test-1;
    }
    return 0;
}

void final(int arr[],int len,int n){
    int task[n];
    for(int i=0;i<n;i++){
        task[i]=i+1;
    }
    int undone[n-len];
    int c=0;
    for(int i=0;i<n;i++){
        if(binarySearch(arr,len,task[i])==-1){
            undone[c]=task[i];
            c++;
        }
    }
    for(int i=0;i<c;i=i+2){
        cout<<undone[i]<<" ";
    }
    cout<<endl;
     for(int i=1;i<c;i=i+2){
        cout<<undone[i]<<" ";
    }
    cout<<endl;

}


void sort(int arr[],int len){
    for (int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if (arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int binarySearch(int arr[], int len, int num) {
    int low=0,high=len-1,mid;
   while (low <= high) {
       mid = (low+high)/2;
      if (arr[mid] == num)
         return mid ;
      else if (arr[mid] < num)
        low=mid+1;
      else{
           high=mid-1;
      }
   }
   return -1;
}
