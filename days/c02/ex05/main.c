#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
  int i;
  int check;

  i = 0;
  check = 1;
  while (str[i] != '\0')
  {
    if (!(str[i] >= 'A' && str[i] <= 'Z'))
      return (0);
    i++;
  }
  return (check);
}

int main(void) {
  printf("%d", ft_str_is_uppercase("SDFGHJK"));
  return 0;
}