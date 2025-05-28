#include<iostream>
using namespace std;

// Function to check whether a number is prime or not.
bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int index = 2 ; index*index <= num ; index++){
        if(num % index == 0){
            return false;
        }
    }
 return true;

}


int main(){
    
    int N;
    cin>>N;
    if(isPrime(N)){
        cout<<"Prime!";
    }
    else{
        cout<<"Non Prime!";
    }
    return 0;
}