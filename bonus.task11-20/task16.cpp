#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a ;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b && a>c){
        cout<<a;
    }else if(b>a && b>c) {
        cout<<b;
    }else{
        cout<<c;
    }
    return 0;
}