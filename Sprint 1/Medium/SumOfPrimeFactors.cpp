#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int index = 2; index <= n; index++)
    {
        int count = 0;

        if (n % index == 0)
        {
            for (int itr = 2; itr < index; itr++)
            {
                if (index % itr != 0)
                {
                    count++;
                    continue;
                }
                else
                {
                    break;
                }
            }
            if (count == index - 2)
            {
                sum = sum + index;
            }
        }
        else
        {
            continue;
        }
    }
    cout << sum;
    return 0;
}