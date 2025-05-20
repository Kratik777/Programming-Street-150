#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int start , end;
    cin>>start>>end;
    double sqrRoot;
    for(int index = start; index <= end ; index++ ){
        sqrRoot = (int)sqrt(index);
        if(index == (sqrRoot*sqrRoot)){
            cout<<index<<" ";
        }
    }
    return 0;
}