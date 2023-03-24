/* The number, 197, is called a circular prime because all 
rotations of the digits: 197, 971, and 719, are themselves prime.
There are thirteen such primes below 100: 
2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
How many circular primes are there below one million? 
the answer 55 */

#include <iostream>
#include <math.h>
using namespace std;

// https://en.wikipedia.org/wiki/Primality_test#Pseudocode
bool isPrime(int n) { 
    if (n <= 1) return false;
    if (n <= 3) return true;
    if ((n % 2 == 0) || (n % 3 == 0)) return false;
    int i = 5;
    while (i * i < n) {
        if ((n % i == 0) || (n % (i + 2) == 0)) return false;
        i += 6;
    }
    return true;
}

/**
 * Is the positive integer a circular prime?
 */
bool isCircularPrime(int n) {
    
    // Determine the length of the integer, and toss some non-primes
    int len = 0;
    int tmp = n;
    while (tmp != 0) {
        int d = tmp % 10;
        if (d == 0 || d % 2 == 0 || d == 5) return false; // Damios
        tmp /= 10;
        len++;
    }
    
    // Generate circular variants of n, and test them for primality
    for (int i = 0; i < len; i++) {
        int d = n % 10;
        n /= 10;
        n += d * pow(10, len - 1);
        if (!isPrime(n)) return false;
    }
    return true;
}

int main() {
    int c = 13;
    for (int i = 101; i < 1000000; i += 2) {
        if (isCircularPrime(i)) c++;
    }
    cout << c << endl;
    return 0;
}
