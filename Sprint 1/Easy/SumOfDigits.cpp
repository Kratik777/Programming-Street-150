#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int temp = num;
    int sum = 0 ; 
    while(temp!=0){
        int digit  = temp%10;
        sum = sum+digit;
        temp = temp/10;
    }
    cout<<"Sum of digits of "<<num<<" is "<<sum;
    return 0;
}