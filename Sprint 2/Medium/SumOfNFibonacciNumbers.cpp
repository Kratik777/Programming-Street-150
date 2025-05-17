#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int n1 = 0;
    int n2 = 1;
    int count = 0;
    int sum =0;
    while(count < n){
  
        int next = n1+n2;
        sum = n1+n2;
        n1 = n2;
        n2 = next;
        count++;

    }
    cout<<sum+1;
    return 0;
}