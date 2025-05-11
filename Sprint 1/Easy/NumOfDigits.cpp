#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int flag=0;
    int ans;
    
    while(num!=0){
          num = num/10;
          flag++;

    }
    cout<<"Number of digits is "<<flag<<endl;
    
    return 0;
}