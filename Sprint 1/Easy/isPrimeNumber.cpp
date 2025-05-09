#include<iostream>
using namespace std;
int main(){
    
    int num;
    cin>>num;
    int count=0;
    for(int index = 2; index < num; index++){
        if(num%index != 0 ){
            count++;
            continue;
        }
        else{
            cout<<"Not a Prime";
            break;
        }
      }
    if(count == num-2){
        cout<<"Prime";
    }
    return 0;
}