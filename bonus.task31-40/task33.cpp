#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    cin>>a;
    if ((a%400==0) || (a%4==0 && a%100!=0)){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}