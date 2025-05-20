#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 0 ; 
    int num = 2;
    int sum = 0;
    while(count < n){
    int flag = 0;

        for(int index = 2; index < num ; index++ ){
            if(num%index == 0){
                flag = 1;
                break;
            }
                     
        }
        if(flag == 0){
            sum+=num;
            count++;
        }
        num++;
    }
    cout<<sum;
    return 0;
}