char	*ft_strcat(char *dest, char *src)
{
  int d_length;
  int i;
  
  d_length = -1;
  while (dest[++d_length]);
  
  i = 0;
  while (src[i])
  {
    dest[d_length] = src[i];
    i++;
    d_length++;
  }
  dest[d_length] = '\0';

  return (dest);
}
