#include <stdio.h>

void fibonacci(int N) {
    int fib_sequence[N];
    fib_sequence[0] = 0;
    fib_sequence[1] = 1;

    for (int i = 2; i < N; i++) {
        fib_sequence[i] = fib_sequence[i-1] + fib_sequence[i-2];
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            printf("%d", fib_sequence[i]);
        } else {
            printf("%d ", fib_sequence[i]);
        }
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);

    if (N > 0 && N < 46) {
        fibonacci(N);
    }

    return 0;
}
