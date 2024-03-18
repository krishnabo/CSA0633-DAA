#include <stdio.h>

int reverse_number(int num) {
    static int reversed = 0;

    if (num == 0)
        return 0;
    
    reversed = reversed * 10 + num % 10;
    reverse_number(num / 10);

    return reversed;
}

int main() {
    int number, reversed_number;

    printf("Enter a number to reverse: ");
    scanf("%d", &number);

    reversed_number = reverse_number(number);
    printf("Reversed number: %d\n", reversed_number);

    return 0;
}
