#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int len = 2 * n - 1;

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            int distance = max(max(i, j), max(len - 1 - i, len - 1 - j));
            printf("%d ", n - distance);
        }
        printf("\n");
    }

    return 0;
}
