#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp = n;
    int sum =0;
    while(temp!=0){
        int rem = temp%10;
        sum = sum + (rem*rem);
        temp = temp/10; 
    }
    cout<<sum;
    return 0;
}