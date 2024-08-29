#include <iostream>
#include "fermat_factorization.hpp"

int main()
{
    mpz_class n; std::cin >> n;
    std::cout << fermat_factorization(n) << '\n';
}