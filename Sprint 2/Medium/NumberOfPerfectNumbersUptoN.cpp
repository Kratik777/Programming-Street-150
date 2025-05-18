#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count = 0 ;
    for(int index = 2 ; index <= n; index++){
        int sum = 0 ; 

        for(int itr = 1; itr < index; itr++){
            if(index%itr == 0 ){
                sum = sum+itr;
            }
        }
        if(sum == index){
          count++;
        }
    }
    cout<<count;
    return 0;
}
