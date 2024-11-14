#include <stdio.h>
#include <math.h>

int isarmstrong(int num) {
  int originalNum = num;
  int numDigits = 0;
  int sum = 0;

  while (num > 0) {
    numDigits++;
    num /= 10;
  }
  num = originalNum;
  while (num > 0) {
    int digit = num % 10;
    sum += pow(digit, numDigits);
    num /= 10;
  }
  return sum == originalNum;
}

int main() {
  int num;

  scanf("%d", &num);

  if (isarmstrong(num)) {
    printf("%d is an armstrong no.\n", num);
  } else {
    printf("%d is not an armstrong no.\n", num);
  }

  return 0;
}
