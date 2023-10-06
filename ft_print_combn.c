/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:32:12 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/11 18:42:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printc(char c)
{
	write(1, &c, 1);
}

void	ft_printb(char a, char b)
{
	ft_printc (a);
	ft_printc (b);
	if (a <= '9' || b <= '9')
	{
		ft_printc (',');
		ft_printc (' ');
	}
}

void	ft_print_combn(int n)
{
	char	i1;
	char	i2;

	i1 = '0';
	i2 = '0';
	while (i1 <= '9')
	{
		i2 = i1 + '1';
		while (i2 <= '9')
		{
			ft_printb(i1, i2);
			i1++;
		}
		i2++;
	}
}
/*
int	main(void)
{
	ft_print_comb(2);
	return (0);
}*/
