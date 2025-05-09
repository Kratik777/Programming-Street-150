#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int temp1 = num1,temp2 = num2;

    while (num1 != num2) {
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }

    int lcm = (temp1*temp2)/num1;
    cout<<"LCM is: "<<lcm;
    return 0;
}
