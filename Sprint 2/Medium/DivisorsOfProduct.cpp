#include <iostream>
using namespace std;

int main() {
    int num1,num2,product;
    cin>>num1>>num2;
    product = num1*num2;
    for(int index = 1 ; index < product ; index++){
        if(product%index == 0 ){
            cout<<index<<" ";
        }
        else{
            continue;
        }
        
    }
    return 0;
}