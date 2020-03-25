
#include <iostream>
#include <cmath>

using namespace std;

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main(){
     int n,d,x;
    cin>>n>>d;
     int arr[n]={0};
    for( int i=1;i<= n;i++){
        cin>>x;
        arr[i]=x;
    }
    quick_sort(arr,1,n);
    int count=0;
     int i=1;
    while(i<n){
        if(arr[i+1]-arr[i]<=d){
            i++;
            count++;
        }
        i++;
    }
    std::cout << count << std::endl;
    return 0;
}

void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do
    {
        do
            i++;

        while(a[i]<v&&i<=u);

        do
            j--;
        while(v<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);

    a[l]=a[j];
    a[j]=v;

    return(j);
}
