#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b=100;
    cin>>a;
    for (int i=2; i<=a; i++){
        if (a%i==0){
            cout <<i<<" "<<endl;
            break;
        }
        }
    return 0;
}