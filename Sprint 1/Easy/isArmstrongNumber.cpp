#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num ;
    cin>>num;
    int n=0;
    int rem;
    int temp = num;
    int count=0;

    while(temp!=0){
      int digit = temp%10;
      count++;
      temp= temp/10;
    }
     temp = num;
    while(temp!=0){
      rem = temp%10;
      n = n + pow(rem , count);
      temp =  temp/10;
           
    }
    if(n == num){
      cout<<"Armstrong Number";
    }
    return 0;
}