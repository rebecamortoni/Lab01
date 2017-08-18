#include "FATORIAL.H"

int fatorial(int n) {
    if (n < 1) return -1;
    if (n == 0) return 0;
    if (n == 1) return n;
    else return n * fatorial(n-1);
}