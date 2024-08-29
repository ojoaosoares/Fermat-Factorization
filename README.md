# Fermat's Factorization Algorithm

Fermat's factorization method is an integer factorization algorithm that relies on the representation of an odd integer as the difference of two squares. It's particularly effective for numbers that are the product of two factors that are close to each other.

## Algorithm Overview

Given an odd integer $N$, Fermat's factorization method expresses $N$ as:

$$
N = a^2 - b^2 = (a - b)(a + b)
$$

Where:

- $a$ and $b$ are integers.
- $a$ is slightly larger than the square root of $N$.
- $b$ is found iteratively.

The factorization then gives us:

$$
N = (a - b) \times (a + b)
$$

## Steps

1. **Initialization**:
   - Compute $a$ as the ceiling of $\sqrt{N}$, i.e., $a = \lceil \sqrt{N} \rceil$.
   - Set $b^2 = a^2 - N$.

2. **Iteration**:
   - While $b^2$ is not a perfect square:
     - Increment $a$ by 1.
     - Recompute $b^2 = a^2 - N$.

3. **Factorization**:
   - Once $b^2$ is a perfect square, compute $b = \sqrt{b^2}$.
   - The factors of $N$ are $(a - b)$ and $(a + b)$.

## Example

Let's factorize $N = 5959$ using Fermat's method.

1. **Initialization**:
   - $a = \lceil \sqrt{5959} \rceil = 78$.
   - $b^2 = 78^2 - 5959 = 6084 - 5959 = 125$, which is not a perfect square.

2. **Iteration**:
   - Increment $a$ to 79.
   - $b^2 = 79^2 - 5959 = 6241 - 5959 = 282$, which is still not a perfect square.
   - Increment $a$ to 80.
   - $b^2 = 80^2 - 5959 = 6400 - 5959 = 441$, which **is** a perfect square.

3. **Factorization**:
   - $b = \sqrt{441} = 21$.
   - The factors of 5959 are $80 - 21 = 59$ and $80 + 21 = 101$.

Thus, $5959 = 59 \times 101$.

## Main Program Usage

The main program implementing Fermat's factorization method takes an odd integer $N$ as input and outputs the factor $(a + b)$. This factor is one of the two factors of $N$, the other being $(a - b)$.

- **Input**: An odd integer $N$.
- **Output**: The factor $(a + b)$, where $N = (a - b) \times (a + b)$.

For instance, given the input $N = 5959$, the program would output $101$.

## Applications and Limitations

Fermat's factorization method is most efficient when the factors of $N$ are close together. If the factors are far apart, the method becomes inefficient compared to other factorization algorithms, like the Pollard rho algorithm or the quadratic sieve.

## References

- Wikipedia: [Fermat's factorization method](https://en.wikipedia.org/wiki/Fermat%27s_factorization_method)
- *Números Inteiros e Criptografia RSA*.
- Other books and research papers on integer factorization and number theory.
