#include <iostream>
#include <cmath>
using namespace std;
bool right(int x1,int y1,int x2,int y2,int x3,int y3){
    int a=(pow(x1-x2,2)+pow(y1-y2,2));
    int b=(pow(x2-x3,2)+pow(y2-y3,2));
    int c=(pow(x3-x1,2)+pow(y3-y1,2));
    if(a+b==c||b+c==a||c+a==b){
        return true;
    }
    return false;
}

int main(){
    int n,x1,y1,x2,y2,x3,y3,count=0;
    cin>>n;
    while(n!=0){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(right( x1, y1, x2, y2, x3, y3)){
            count++;
        }
        n--;
    }
    std::cout << count << std::endl;
    return 0;
}
