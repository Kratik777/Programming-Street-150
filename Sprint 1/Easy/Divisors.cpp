#include <iostream>
using namespace std;

//Function to calculate divisors:
void divisors(int num){
    for(int index = 2 ; index <num ; index++){
        if(num%index ==0 ){
            cout<<index<<" ";
        }
        else{
            continue;
        }
    }
}

int main() {
    int N;
    cin>>N;

    divisors(N);
    return 0;
}