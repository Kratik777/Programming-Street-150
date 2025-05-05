#include <iostream>
using namespace std;

int main() {
    int limit ;
    cin>>limit;
    int n1 = 0;
    int n2 =1;
 
    while(n1<=limit){
     
        cout<<n1<<" ";
       int next = n1+n2;
        n1 = n2;
        n2 = next;
       
    }
    return 0;
}