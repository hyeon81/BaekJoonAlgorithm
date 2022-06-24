#include <stdio.h>

int is_prime(int num) {
    int i = 2;
    while (i <= (num / i)) {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int is_only_prime(int n, int arr[]) {
    int j = 0;
    //2로 나눴을 때 소수인지 확인
    while (j < 1229) {
        if (n / 2 == arr[j]) {
            printf("%d %d");
            return (1);
        }
        j++;
    }
    return (0);
}

//2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것이다.
int main() {
    int t, n, i, a, b;
    int j = 0;
    int arr[1229];
    scanf("%d", &t);

    i = 3;
    //소수만 들어간 arr 만들기
    while (i <= 10000) {
        if (is_prime(i) == 1) {
            arr[j] = i;
            j++;
        }
        i++;
    }

    i = 0;
    while (i < t) {
        scanf("%d", &n);
        a = 0;
        b = 0;
        j = 0;

        if (n % 2 == 1) {
            if (is_only_prime(n, arr) == 1)
                break;
        }
        //2로 나눴을때 값을 가지고...
        while (n != a + b) {
            a = arr[j];
        }
        printf("%d %d\n", a, b);
        i++;
    }
}