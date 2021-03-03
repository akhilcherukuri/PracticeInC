#include <stdio.h>

int sum_digits(int inputnumber){
  int sum = 0;
  while(inputnumber != 0){
    sum = sum + inputnumber % 10;
    inputnumber = inputnumber/10;
  }
  return sum;
}

int main(){
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  printf("Sum of Digits: %d\n", sum_digits(n));
}