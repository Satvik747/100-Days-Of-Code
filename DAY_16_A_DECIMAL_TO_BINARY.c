/*Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main(){
    int n,bin=0,place=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        bin+= (n%2)*place;
        n/=2;
        place*=10;
    }
    printf("%d",bin);
    return 0;

}
