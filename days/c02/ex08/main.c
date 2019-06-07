#include <stdio.h>

char    *ft_strlowcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
    i++;
  }
  return (str);
}

int   main(void)
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  
  printf("%s", ft_strlowcase(str));
  return (0);
}