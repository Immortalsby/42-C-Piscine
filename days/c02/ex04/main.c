#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
  int i;
  int check;

  i = 0;
  check = 1;
  while (str[i] != '\0')
  {
    if (!(str[i] >= 'a' && str[i] <= 'z'))
      return (0);
    i++;
  }
  return (check);
}

int main(void) {
  printf("%d", ft_str_is_lowercase("vdfgdgdfg"));
  return 0;
}