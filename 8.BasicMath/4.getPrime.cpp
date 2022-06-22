#include <stdio.h>

int is_prime(int num) {
    int i = 11;
    while (i <= (num / i)) {
        if (num % i == 0)
            return (0);
        i = i + 2;
    }
    return (1);
}

int main() {
    int M, N, i;
    scanf("%d %d", &M, &N);

    if (M == 1)
    {
        printf("%d\n", 2);
        i = 3;
    }
    else if (M == 2) {
        printf("%d\n", 2);
        i = 3;
    } else if (M % 2 == 0)
        i = M + 1;
    else
        i = M;

    while (i <= N) {
        if (i == 3 || i == 5 || i == 7) {
            printf("%d\n", i);
            i = i + 2;
            continue;
        } else if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            i = i + 2;
            continue;
        } else if (is_prime(i) == 1)
            printf("%d\n", i);
        i = i + 2;
    }
    return 0;
}