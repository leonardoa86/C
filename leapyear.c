#include <stdio.h>

int LeapYear(int year)
{
  if (year % 400 == 0)
    return 1;
  if (year % 100 == 0)
    return 0;
  if (year % 4 == 0)
    return 1;

  return 0;
}

int main()
{
  printf("2000: %d\n", LeapYear(2000));
  printf("400:  %d\n", LeapYear(400));
  printf("2001: %d\n", LeapYear(2001));
  printf("2016: %d\n", LeapYear(2016));
    
    return 0;
}
