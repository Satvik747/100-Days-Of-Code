/*Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits, swapNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = (int)(num / pow(10, digits));
    
    if (firstDigit == lastDigit) {
        swapNum = num; // No change if first and last digits are the same
    } else {
        swapNum = (lastDigit * pow(10, digits)) + (num % (int)pow(10, digits) - lastDigit) + firstDigit;
    }
    
    printf("%d\n", swapNum);
    return 0;
}
