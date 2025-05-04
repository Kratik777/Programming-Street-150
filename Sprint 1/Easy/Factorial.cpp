#include <iostream>
using namespace std;

int main() {
    int num ;
    cin>>num;

    int fact=1;
    for(int index= num ; index >=1; index--){
        fact = fact*index;
    }
    cout<<"Factorial of "<<num<<" is "<<fact;
    return 0;
}