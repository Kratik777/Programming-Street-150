#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }

    cout << "GCD is: " << num1 << endl;
    return 0;
}
