#include <iostream>
#include "fermat_factorization.hpp"

int main()
{
    std::cout << "N: ";
    mpz_class n; std::cin >> n;

    try
    {
        std::cout << fermat_factorization(n) << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}