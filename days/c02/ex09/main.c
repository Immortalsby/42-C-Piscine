#include <stdio.h>



char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' ') &&
				(str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] -= 32;
		}
		else if (!(i == 0 || str[i - 1] == ' ') &&
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int   main(void)
{
  char str[] = "asdf qWeRtY ZXCV 100TIS";
  
  printf("\n%s", ft_strcapitalize(str));
  return (0);
}