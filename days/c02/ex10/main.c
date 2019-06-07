#include<stdio.h>
#include<string.h>

unsigned int ft_strlcpy (char * dest, char * src, unsigned int size);


int main()
{
  char dest[20];
  char src[] = "programming\0";
  int size = sizeof(dest);
  //ft_strlcpy(dest,src,size);
  printf("%d\n",ft_strlcpy(dest,src,size));
  printf("%s\n",dest);

}

unsigned int ft_strlcpy (char * dest, char * src, unsigned int size)
{
   unsigned int i = 0;
   
  while(src[i] != '\0' && i < (size - 1))
  {
      dest[i] = src[i];
      i++; 
  }

  dest[i] = '\0';

  i = 0;
  
  while(src[i] != '\0')
  {  
   i++;
  }
  int src_length = i;

  return src_length;
}

