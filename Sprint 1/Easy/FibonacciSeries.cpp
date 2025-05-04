#include <iostream>
using namespace std;

int main() {
    int limit ;
    cin>>limit;
    int n1 = 0;
    int n2 =1;
    cout<<n1<<" ";
    cout<<n2<<" ";
    while(n2+n1<=limit){
     
       int next = n1+n2;
        cout<<next<<" ";
        n1 = n2;
        n2 = next;
       
    }
    return 0;
}