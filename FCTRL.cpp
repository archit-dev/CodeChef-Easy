#include <iostream>

int fac(int ip){
    int num=0;
    while(ip!=0){
        num+=ip/5;
        ip=ip/5;
    }
    return num;
}

using namespace std;
int main(){
    int num=0,ip,n;
    cin>>n;
    while(n!=0){
        cin>>ip;
        cout<<fac(ip)<<endl;
        n--;
    }
    return 0;

}
