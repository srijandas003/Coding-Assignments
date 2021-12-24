#include<stdio.h>

int replace(long int number)
{

  if (number == 0)
  return 0;

  int digit = number % 10;
  if (digit == 0)
    digit = 1;

  return replace(number/10) * 10 + digit;
}

int Convert(long int number)
{
  if (number == 0)
    return 1;
  else
    return replace(number);
}

int main()
{
  long int number;
  printf("Enter the number :");
  scanf("%ld", &number);
  printf("Number after replacement : %d", Convert(number));
  return 0;
}