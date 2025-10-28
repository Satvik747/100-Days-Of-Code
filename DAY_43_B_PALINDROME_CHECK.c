/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    char s[100];
    int i, j, flag = 1;
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++);
    for(j = 0; j < i/2; j++) {
        if(s[j] != s[i-1-j]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
