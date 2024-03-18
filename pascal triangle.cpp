#include <stdio.h>
int factorial(int n) 
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
void printPascalTriangle(int rows) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    printPascalTriangle(rows);
    return 0;
}


