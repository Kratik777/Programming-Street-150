#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int ans = 0;
 
     for(int index = 1 ; index <=N; index++){
        ans = ans+index;
     }

     
    cout<<N<<"th "<<"triangular number is: "<<ans;

    return 0;
}