#include <iostream>
using namespace std;

int main() {
    int limit;
    cin>>limit;
    for(int index = 2; index<=limit ; index++){
        int flag = 0;
        for(int curNumebr = 2; curNumebr < index; curNumebr++ ){
            if(index%curNumebr == 0){
                flag+=1;
                break;
            }
            else{
                continue;
            }  
            
            
        }
        if(flag == 0 ){
            cout<<index<<" ";
        }
    }

    return 0;
}