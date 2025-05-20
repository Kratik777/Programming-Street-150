#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int divisor = 1 ;
    for(int index = 2; index <= n; index++){
        int count = 0;
        for(int itr = 2 ; itr < index; itr++){
            if(index%itr ==0){
                count = 1;
                break;
            }
            else{
                continue;
            }

        }
        if(count == 0 && n % index == 0 ){
            if(index > divisor){
                divisor = index;
            }
        }
    }
    cout<<divisor<<endl;
    return 0;
}
