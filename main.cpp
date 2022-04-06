#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char arr[80];
    for (int i = 0; i < 80; i++){
        arr[i] = -1;
    }

    for (int i = 0; i < n; i++) {
            scanf("%s", arr);

        int score = 0;
        int sum = 0;
        for (int j = 1; j < 80; j++) {
            if (arr[j] == 'X') {
                sum += score;
                score = 0;
            } else if (arr[j] == 'O' && score == 0)
                score = 1;
            else if (arr[j] == 'O' && score > 0)
                score += score + 1;
            else
                break;
        }
        printf("%d\n", sum);
    }

    return 0;
}