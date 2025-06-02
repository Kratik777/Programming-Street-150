#include <iostream>
using namespace std;

// Function to calculate the sum of first N prime numbers.
int primeNumberSum(int num){
    int count = 0;
    int sum = 0 ;
    int N = 2;
    while(count < num){
        bool isPrime = true;
        for (int index = 2; index*index <= N; index++){
            if(N%index == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            sum+=N;
            count++;
        }
        N++;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    cout<<"Sum of first "<<n<<" prime numbers is: "<<primeNumberSum(n);
    return 0;
}