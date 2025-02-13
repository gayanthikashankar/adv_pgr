#include <stdio.h>
//get the sum of squares for each digit in a number
int sumOfSquareDigits(int num) {
    int sum = 0;
    
    while (num != 0) {
        int digit = num % 10;  //Get last digit
        sum += digit * digit;  //Add square of last digit to sum
        num = num / 10;       //Remove last digit
    }
    
    return sum;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sumOfSquareDigits(number);
    printf("Sum of squares of digits: %d\n", result);
    
    return 0;
}