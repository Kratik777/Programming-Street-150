#include <iostream>
using namespace std;

int SpecificDigits(int num){
    
}

int main() {
    int n;
    cin>>n;
    int flag=0;
    int x;
    int temp = n;
    while(temp!=0){
        int rem = temp%10;
        if(rem!=x)
        {
            flag++;
            temp = temp/10;
        } 
        else{
            temp/=10;
            continue;
        }


        x = rem;

    }
    cout<<flag;

    return 0;
}