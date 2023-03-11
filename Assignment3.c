#include <stdio.h>

int main() {
    int num, original_num, remainder, reverse_num = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original_num = num;
    
    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder;
        num /= 10;
    }
    
    if (original_num == reverse_num) {
        printf("%d is a palindrome number.", original_num);
    }
    else {
        printf("%d is not a palindrome number.", original_num);
    }
    
    return 0;
}
