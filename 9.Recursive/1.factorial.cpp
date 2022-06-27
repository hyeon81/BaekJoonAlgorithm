#include "stdio.h"

int fac(int n) {
    if (n <= 1)
        return 1;
    return (fac(n - 1) * n);
}

int main() {
    int num;

    scanf("%d", &num);
    printf("%d", fac(num));
    return 0;
}