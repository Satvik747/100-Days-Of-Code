/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float cp,sp;
    printf("Enter cost and selling price:");
    scanf("%f %f",&cp,&sp);
    if(sp==cp){
    printf("No Profit No Loss");
    exit(0);}
    int p=(int) (((sp-cp)/cp)*100);
    if(p<0)
    printf("Loss %d %%",abs(p));
    else
    printf("Profit %d%%",p);
    return 0;
}
