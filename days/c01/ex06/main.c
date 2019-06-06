#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (1)
	{
		if (str[n] == '\0')
		{
			return (n);
		}
		n++;
	}
}

int		main(void)
{
	char *ptr;

	ptr = "hello";
	int ret = ft_strlen(ptr);
	printf("%d", ret);
	return (0);
}