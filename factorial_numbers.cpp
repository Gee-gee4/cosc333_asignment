#include <iostream>
#include <ctime>

using namespace std;

// This is the Factorial Function 
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Measures the  Factorial Runtime
    clock_t start1 = clock();
    long long factResult = factorial(n);
    clock_t stop1 = clock();
    double duration1 = double(stop1 - start1) / CLOCKS_PER_SEC;

    cout << "Factorial(" << n << ") = " << factResult << "\n";
    cout << "Time taken: " << duration1 << " seconds\n";

    return 0;
}
