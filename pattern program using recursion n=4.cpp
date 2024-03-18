#include <stdio.h>

void printTriangle(int n) {
    if (n == 0) return;

    printTriangle(n - 1);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n = 4;
    printTriangle(n);
    return 0;
}
