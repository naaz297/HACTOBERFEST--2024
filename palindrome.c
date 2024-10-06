#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n;

    // Reversing the number
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // Checking if the original number is equal to the reversed number
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
