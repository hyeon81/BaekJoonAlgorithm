#include <stdio.h>

int is_prime(int num) {
    for (int i = 2; i <= (num / i); i++) {
        if (num % i == 0)
            return (0);
    }
    return (1);
}

int main() {
    int N, num;
    scanf("%d", &N);
    num = N;

    if (N == 1)
        return 0;
    if ((is_prime(N) == 1))
    {
        printf("%d\n", N);
        return 0;
    }

    for(int i = 2; i <= N; i++)
    {
        while (num % i == 0)
        {
            printf("%d\n", i);
            num = num / i;
            if (num == 1)
                return (0);
        }
    }
    return 0;
}