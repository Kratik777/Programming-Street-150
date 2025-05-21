#include <iostream>
using namespace std;

int main() {
    int start,end; 
    cin>>start>>end;
    for(int index = start ; index <= end ; index++){
        cout<<"Table of "<<index<<endl;
        for(int itr = 1; itr <=4 ; itr++){
            cout<<index<<"*"<<itr<<" = "<<index*itr<<endl;
        }
    }
    return 0;
}