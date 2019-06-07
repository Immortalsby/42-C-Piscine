#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (src[i] != '\0' && i < n - 1)
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = src[i];
  return (dest);
}

int main(void) {
  
 char str[] = "asdfasdfasdf";
 char dest[] = "there";
 
 printf("%s", ft_strncpy(dest, str, 5));
  return 0;
}