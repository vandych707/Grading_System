//write a query to print prime and non prime both
#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n is divisible by some number other than 1 and itself
        }
    }
    return 1; // n is prime
}

int main() {
    int n = 1;
    int count = 0;

    while (count < 20) {
        if (is_prime(n)) {
            printf("%d is a prime number\n", n);
        } else {
            printf("%d is not a prime number\n", n);
        }
        n++;
        count++;
    }

    return 0;
}