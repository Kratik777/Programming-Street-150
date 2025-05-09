#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int sum = 0 ;
    for(int index = 1; index < num; index++ ){
        if(num%index == 0){
            sum = sum+index;
        }
        else{
            continue;
        }
    
    }
        if(sum == num){
            cout<<"Perfect Number!";
        }
        else{
            cout<<"Not a Perfect Number!";
        }
    return 0;
}