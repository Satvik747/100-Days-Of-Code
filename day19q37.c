/*Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int max=(a>b)?a:b;int i=1;
    for( i=1;;i++){
       if(((max*i)%a)==0 && ((max*i)%b)==0){
           break;
       }
    }
    printf("%d ",(max*i));
}