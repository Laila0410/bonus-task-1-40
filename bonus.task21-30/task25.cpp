#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b=100;
    cin>>a;
    for (int i=1; i<=a; i++){
        if (a%i==0){
            cout <<i<<" "<<endl;
        }
        }
    return 0;
}