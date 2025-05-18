#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    
    for(int index = 2 ; index <=n ; index++){
        if(index%2 == 0 ){
            sum+= (index*index);
        }
    }
    cout<<sum;
    

    return 0;
}