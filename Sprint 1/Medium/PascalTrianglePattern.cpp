#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 0 ; row < n ; row++){
        int C =1;
        for(int col = 0 ; col <= row; col++){
            cout<<C<<" ";
            C = C * (row-col)/(col+1);
        }
        cout<<endl;
    }
    return 0;
}