#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int value;
    cin>>value;
    int count = 0 ;
    while(num!=0){
        int digit = num%10;
        if(digit>value){
            count++;
        }
        num = num/10;
    }
    cout<<count;
    return 0;
}