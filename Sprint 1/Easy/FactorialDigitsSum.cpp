#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long ans=1;
    while(n>0){
        ans = ans*n;
        n--;
    }
    cout<<ans;
    int sum = 0 ; 
    while(ans!=0){
        sum = sum+(ans%10);
        ans = ans/10;
    }
    cout<<sum;
    return 0;
}