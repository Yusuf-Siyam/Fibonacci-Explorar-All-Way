#include <iostream>
#include <vector>
using namespace std;

// Function to calculate Fibonacci using memoization (Top-down DP)
int fibonacciTopDown(int n, vector<int>& dp) {
    
    if (n <= 1) return n;

    
    if (dp[n] != -1) return dp[n];

   
    dp[n] = fibonacciTopDown(n - 1, dp) + fibonacciTopDown(n - 2, dp);

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    
    vector<int> dp(n + 1,-1); 

    
    int result = fibonacciTopDown(n, dp);

    cout << "Fibonacci of " << n << " is: " << result << endl;

    return 0;
}
