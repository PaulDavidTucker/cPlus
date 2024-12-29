#include <iostream>
#include <gmp.h>
#include <cstdint>
#include <chrono>


using namespace std;
using namespace std::chrono;

// Function to calculate the nth Fibonacci number using GMP
void nthFibonacci(mpz_t result, uint64_t n) {
    mpz_t a, b, temp;
    mpz_init_set_ui(a, 0);
    mpz_init_set_ui(b, 1);
    mpz_init(temp);

    for (uint64_t i = 2; i <= n; ++i) {
        mpz_add(temp, a, b);
        mpz_set(a, b);
        mpz_set(b, temp);
    }

    if (n == 0) {
        mpz_set(result, a);
    } else {
        mpz_set(result, b);
    }

    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(temp);
}

int main() {
    cout << "Please enter the number!" << endl;
    uint64_t n;
    cin >> n;

    mpz_t result;
    mpz_init(result);

    auto start = high_resolution_clock::now();

    nthFibonacci(result, n);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);

    cout << "Fibonacci number " << n << " is: ";
    mpz_out_str(stdout, 10, result);
    cout << endl;

    cout << "Calculated in: " << duration.count() << " microseconds" << endl;

    cout << milliseconds(duration.count()).count() << endl;

    mpz_clear(result);

    return 0;
}