#include <unistd.h>
#include <stdio.h>

int main()
{
  
  int i = 8;
  int j = 10;
  int temp;
    
  int *iptr = &i;
  int *jptr = &j;

  ft_swap(iptr, jptr);

  printf("%d\n", i);
  printf("%d\n", j);
  
  return (0);
}

void ft_swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
