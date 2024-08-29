#include "fermat_factorization.hpp"
#include <cmath>

mpz_class fermat_factorization(mpz_class n) {
    
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