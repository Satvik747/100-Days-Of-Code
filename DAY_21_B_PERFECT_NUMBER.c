/*Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(){
    int a, s = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    for(int i = 1; i <= a / 2; i++) {
        if(a % i == 0) {
            s += i;
        }
    }
    
    if(s == a) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    return 0;
}
