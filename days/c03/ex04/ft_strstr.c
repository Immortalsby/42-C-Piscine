char *ft_strstr(char *str, char *to_find)
{
  int i; 
  i = 0;
  
  // if(to_find[] == '\0')
  // {
  //   return str;
  // }
  while(to_find[0] == str[i])
  {
    i ++;
  }
  printf("ft_strstr==%d\n", i);
  return (str); 
  
}
