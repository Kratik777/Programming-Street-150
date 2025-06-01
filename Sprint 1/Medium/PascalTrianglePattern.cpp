#include <iostream>
using namespace std;

// Function to print pascal triangle pattern.
void pascalTriangle(int n)
{
    for (int row = 0; row < n; row++)
    {
        int C = 1;
        for (int col = 0; col <= row; col++)
        {
            cout << C << " ";
            C = C * (row - col) / (col + 1);
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pascalTriangle(n);

    return 0;
}