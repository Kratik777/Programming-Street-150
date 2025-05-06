#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin>>a>>b;
    int large;
    int small;
    if(a-b>=0){
        large=a;
        small=b;
    }
    else{
        large=b;
        small=a;
    }
    int sub=0;
    sub = large+small;
    while(a!=b){
        if(sub>small){
            a=sub;
            b=small;
            sub = sub-small;
        }
        else{
            a=small;
            b=sub;
            sub = small-sub;
        }
        
    }
    cout<<"GCD Of "<<a<<" & "<<b<<" is "<<sub;
    return 0;
}