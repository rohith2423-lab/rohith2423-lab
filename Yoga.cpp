#include <stdio.h>

int main() {
    int T, N, X, Y, max_earnings;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &N, &X, &Y);
        max_earnings = (N / 2) * Y + (N % 2) * X;

        printf("%d\n", max_earnings);
    }

    return 0;
}
