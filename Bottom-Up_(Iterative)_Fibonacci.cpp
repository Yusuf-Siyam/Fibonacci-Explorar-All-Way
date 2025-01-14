#include <iostream>
using namespace std;

int fibo(int n)
{

    if (n <= 1){
        return n; // Base cases
    }

    // Create a DP table to store Fibonacci numbers:
    int dpTable[n + 1];
    dpTable[0] = 0;
    dpTable[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dpTable[i] = dpTable[i - 1] + dpTable[i - 2];
    }
    return dpTable[n];
}

int main()
{
    int n;
    cout << "Enter the Fibonacci number (n): ";
    cin >> n;

    int result = fibo(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;

    return 0;
}
// Time Complexity:𝑂(𝑛)
// Space Complexity:O(n) (for recursion stack and memo array))
