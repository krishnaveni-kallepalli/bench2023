#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
  int current_digit, sum = 0, num = number;

  while (num > 0) {
    current_digit = num % 10;
    sum += pow(current_digit, 3);
    num /= 10;
  }

  if (sum == number) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int number, isArmstrongNumber;

  printf("Enter a three-digit number: ");
  scanf("%d", &number);

  isArmstrongNumber = isArmstrong(number);

  if (isArmstrongNumber == 1) {
    printf("%d is an Armstrong Number.", number);
  } else {
    printf("%d is not an Armstrong Number.", number);
  }

  return 0;
}

