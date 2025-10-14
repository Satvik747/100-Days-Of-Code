/*Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){
    int n,rev=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==temp)
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}
