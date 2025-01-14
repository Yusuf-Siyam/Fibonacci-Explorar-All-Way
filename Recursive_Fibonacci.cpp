#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) return n; // Base cases: F(0) = 0, F(1) = 1

    // Recursive computation
    int left = fibo(n - 1);
    int right = fibo(n - 2);
    return left + right;
}

int main() {
    int n;
    cout << "Enter the Fibonacci number  (n): ";
    cin >> n;

    int result = fibo(n);  
    cout << "Fibonacci of (result) " << n << " is: " << result << endl;

    return 0;
}

//Time Complexity:𝑂(2^𝑛)
//Space Complexity:O(n) (due to recursion stack)

