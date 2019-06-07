#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
  int i;
  int check;

  i = 0;
  check = 1;
  while (str[i] != '\0')
  {
    if (!(str[i] >= '0' && str[i] <= '9'))
      return (0);
    i++;
  }
  return (check);
}

int main(void) {
  printf("%d", ft_str_is_numeric("123456789"));
  return 0;
}



