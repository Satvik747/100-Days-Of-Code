/*Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
    int n,tmp,sum=0,digits=0;
    printf("Enter a number:");
    scanf("%d",&n);
    tmp=n;
    while(tmp!=0){
        digits++;
        tmp/=10;
    }
    tmp=n;
    while(tmp!=0){
        sum+=pow(tmp%10,digits);
        tmp/=10;
    }
    if(sum==n)
    printf("Armstrong");
    else
    printf("Not Armstrong");
    return 0;
}
