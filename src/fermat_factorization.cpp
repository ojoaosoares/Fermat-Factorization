#include "fermat_factorization.hpp"
#include <cmath>

mpz_class fermat_factorization(mpz_class n) {

    if (n < 1)
        throw std::invalid_argument("Error: N is a negative number");

    if (n % 2 == 0)
        throw std::invalid_argument("Error: N is an even number");
    
    mpz_class x = std::sqrt(n);

    if (x*x == n) return x;

    x++; mpz_class y2 = x*x - n;
    mpz_class y = std::sqrt(y2);

    while (y2 != y*y)
    {
        y2 += 2*x + 1; x++; 
        y = std::sqrt(y2);
    }

    return x + y;
}