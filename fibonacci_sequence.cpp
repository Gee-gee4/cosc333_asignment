#include <iostream>
#include <ctime>

using namespace std;

//This is the Fibonacci Function
void fibonacci(int n) {
    long long a = 0, b = 1, c;
    cout << "Fibonacci Sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << "\n";
}

int main() {
    int n;
    //What it outputs for the user to input
    cout << "Enter the number of terms: ";
    cin >> n;

    // Measures the Fibonacci Runtime
    clock_t start2 = clock();
    fibonacci(n);
    clock_t stop2 = clock();
    double duration2 = double(stop2 - start2) / CLOCKS_PER_SEC;

    cout << "Time taken: " << duration2 << " seconds\n";

    return 0;
}
