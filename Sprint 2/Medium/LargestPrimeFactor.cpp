#include <iostream>
using namespace std;

//Function to find out the largest prime factor.
int largestPrimeFactor(int num){
    int factor = 1;
    for(int index = 2; index*index<=num; index++){
        int flag = 0;
        for(int itr = 2 ; itr < index ; itr++){
            if(index%itr == 0 ){
                flag = 1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag == 0 && num%index == 0 && index > factor ){
            factor = index;
        }
    }
    if(factor == 1){
        return num;
    }
    return factor;
}
int main() {
    int n;
    cin>>n;
    cout<<"Largest Prime factor of "<<n<<" is "<<largestPrimeFactor(n);
    return 0;
}
