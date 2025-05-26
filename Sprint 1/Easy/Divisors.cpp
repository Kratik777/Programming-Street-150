#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    for(int index = 1 ; index <=N ; index++){
        if(N%index ==0 ){
            cout<<index<<" ";
        }
        else{
            continue;
        }
    }
    return 0;
}