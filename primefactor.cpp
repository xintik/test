#include <iostream>
using namespace std;

void distinctPrimeFactors(int n) {
    // Check for factor 2
    if (n % 2 == 0) {
        cout << 2 << " ";
        while (n % 2 == 0) {
            n /= 2;
        }
    }

    // Check for odd prime factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cout << i << " ";
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    // If n is still a prime number greater than 2
    if (n > 2)
        cout << n;

    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    distinctPrimeFactors(num);

    return 0;
}
