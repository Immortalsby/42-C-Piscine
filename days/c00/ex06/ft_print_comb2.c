/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:56:56 by bshi              #+#    #+#             */
/*   Updated: 2019/06/05 22:00:32 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (++i < 99)
	{
		j = i;
		while (++j < 100)
		{
			ft_putchar((char)(i / 10) + '0');
			ft_putchar((char)(i % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(j / 10) + '0');
			ft_putchar((char)(j % 10) + '0');
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
