Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int main(){
  int n, i, remainder, strong=0, original;

  printf("Enter a number to check : \n");
  scanf("%d", &n);

  original = n;

  while(n>0){
    remainder = n%10;
    
    int factorial=1;
    for(i=1; i<=remainder; i++){
      factorial = factorial * i;
    }
    strong += factorial;
    n /= 10;
  }
  if(strong == original){
    printf("Strong Number\n");
  }
  else{
    printf("Not Strong Number\n");
  }
  return 0;
}
