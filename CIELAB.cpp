#include <iostream>
#include <cmath>
using namespace std;
int count(int x);
void arr(int x);

int main(){
    int a,b;
    cin>>a>>b;
    arr(a-b);
    return 0;

}

int count(int x){
    int num=0;
    while(x!=0){
        x=x/10;
        num++;
    }
    return num;
}

void arr(int x){
    //int xx=x;
    int rem=0,i=0,size=count(x);
    int arr[x]={0};
    while(x>0){
        rem=x%10;
        arr[i]= rem;
        x=x/10;
        i++;
    }
    if(arr[0]!=9){
        arr[0]=arr[0]+1;
    }
    else{
        arr[0]=3;
    }
    for( i =size-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
}
