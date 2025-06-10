#include <iostream>
#include<math.h>
using namespace std;

//Function to convert Binary to Decimal:
int binaryToDecimalMethod(int num){
    int decimalNum = 0 ;
    int i= 0 ;
    while(num!=0){
        int bit = num%10;
        decimalNum = bit*pow(2,i++)+decimalNum; 
        num= num/10;
    }
    return decimalNum;
}
 
int main() {
    
    int num;
    cin>>num;
    cout<<binaryToDecimalMethod(num)<<endl;
    return 0;
}