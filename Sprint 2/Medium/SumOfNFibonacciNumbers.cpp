#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int n1 = 0;
    int n2 = 1;
    int sum = 0;

    for (int count = 0; count < n; count++) {
        sum += n1;         
        int next = n1 + n2;
        n1 = n2;
        n2 = next;
    }

    cout << sum;
    return 0;
}
