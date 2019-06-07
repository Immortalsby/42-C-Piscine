#include <unistd.h>
#include <stdio.h>




char	*ft_strcpy(char *dest, char *scr)
{
  // printf("%s\n", scr);
  // printf("%s\n", dest);
  
  // // *dest ='\0';
  // // printf("%s\n", dest);
  
  
  // printf("%c\n", scr[0]);
  // printf("%c\n", dest[0]);
  // dest[0] = scr[0];
  // printf("%c\n", scr[0]);
  // printf("%c\n", dest[0]);
  
  
  int i;
  // int scr_length;
  
  // scr_length = 0;
  // while (scr[scr_length])
  //   {
  //     scr_length++;
  //   }
  
  // printf("%d\n", scr_length);
  
  i = 0;
  while (scr[i] != '\0')
  {
    dest[i] = scr[i];
    i++;
  }

  
  dest[i] = '\0';

  printf("%s\n", dest);
  
  
  
   return (dest);
}


int main()
{
 char str[] = "asdfasdfasdf";
 char dest[] = "there";
 
 printf("%s", ft_strcpy(dest, str));
 
 return(0);
}