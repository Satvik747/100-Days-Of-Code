/*Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
    int n,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=1){
        printf("Not prime");
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;break;
        }
    }
    if(c==0)
    printf("Prime");
    else
    printf("Not prime");
    return 0;
}