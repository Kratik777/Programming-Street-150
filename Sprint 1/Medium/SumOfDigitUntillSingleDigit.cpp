#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int rem;
    int rem2;
    int sum = 0 ;
   
    while(n!=0){
         rem = n%10;
         sum = sum + rem;
         if(sum > 9){
             int sum2 = 0;
            while(sum!=0){
              rem2 = sum%10;
              sum2 = sum2+rem2;
              sum = sum/10;
            }
              sum = sum2;
         }
       
         n = n/10;
    }
    cout<<sum;
    return 0;
}