#include <stdio.h>
#include <stdbool.h>

// Modified program to generate prime numbers

int main(void) {
  int p, i, primes[50], primeIndex = 2;
  bool isPrime;

  // Initialize first two prime numbers
  primes[0] = 2;
  primes[1] = 3;

  // Test for primes between 5 and 50
  for (p = 5; p <= 50; p += 2) {
    isPrime = true;

    // Test is p a prime
    for (i = 1; isPrime /* short circuit */ && p / primes[i] >= primes[i]; ++i) 
      if ( p % primes[i] == 0 ) // P cannot be prime
        isPrime = false;

    // Updsate primes[] if p is prime
    if (isPrime == true) {
      primes[primeIndex] = p;
      primeIndex++;
    }
  }

  // Print the prime numbers stored in primes[]
  for (i = 0; i < primeIndex; i++) 
    printf ("%i  ", primes[i]);

  printf ("\n");
  
  return 0;
}