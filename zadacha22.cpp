#include <iostream>
#include <cmath>

using namespace std;

double calculateExpression(double x, int n) {
    double result = log(-1 + cos(x));

    for (int k = 1; k <= n; ++k) {
        result -= pow(-1, k) / (k * pow(-1 + cos(x), k));
    }

    return result;
}

int main() {

    // Example usage:
    double x = 0;
    int n = 0;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;

    double result = calculateExpression(x, n);

    std::cout << "Result: " << result << std::endl;

    return 0;
}