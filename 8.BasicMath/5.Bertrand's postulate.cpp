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

//입력의 마지막에는 0이 주어진다.
int main() {
    int M, i, cnt;

    while (1) {
        scanf("%d", &M);
        if (M == 0)
            return (0);
        cnt = 0;
        M += 1;
        //i값 세팅.
        if (M == 1) {
            cnt += 1;
            i = 3;
        } else if (M == 2) {
            cnt += 1;
            i = 3;
        } else if (M % 2 == 0)
            i = M + 1;
        else
            i = M;

        //13 <= 26
        while (i <= (M - 1) * 2) {
            if (i == 3 || i == 5 || i == 7) {
                cnt += 1;
                i = i + 2;
                continue;
            } else if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                i = i + 2;
                continue;
            } else if (is_prime(i) == 1) {
                cnt += 1;
            }
            i = i + 2;
        }
        printf("%d\n", cnt);
    }
    return 0;
}