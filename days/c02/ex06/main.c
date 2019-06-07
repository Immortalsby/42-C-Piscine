#include <stdio.h>

int     ft_str_is_printable(char *str)
{
  int i;
  int check;

  i = 0;
  check = 1;
  while (str[i] != '\0')
  {
    if (!(str[i] >= 32 && str[i] <= 126))
      return (0);
    i++;
  }
  return (check);
}

int main(void) 
{
  printf("%d", ft_str_is_printable(" "));
  return 0;
}