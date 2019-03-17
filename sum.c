#include <stdio.h> 
int sum (int a, int b)
{
  return a+b;
}

int main (void)
{
  int const a=sum(2,2);

  printf("sum is %d\n",a);

  return 0;
}