#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    double sum = 0 ;
    for ( int index = 1 ; index <= n ; index++){
        sum+=1.0/index;
    }
    cout<<sum;
    return 0;
}