#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cin >> n;
   
    double sqrRoot = sqrt(n);  
    int sqr = sqrRoot * sqrRoot; 

    if (sqr == n) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
