#include <iostream>
using namespace std;

int main()
{
    int position;
    cin >> position;
    int count = 2;// since we already printing 0 and 1 .
    int n1, n2, next;
    n1 = 0, n2 = 1;
    cout<<n1<<" "<<n2<<" ";
    next=n1+n2;
    while (count < position)
    {
        cout << next << " ";
        n1 = n2;
        n2 = next;
        next = n1 + n2;
        count++;
    }

    cout<<endl<<"Fibonacci at position "<<position<<" is "<<n2<<endl;

    return 0;
}