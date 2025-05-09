#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int limit = 5;
    for(int index =1 ; index <=limit ; index++){
        cout<<num*index<<endl;
    }
    return 0;
}