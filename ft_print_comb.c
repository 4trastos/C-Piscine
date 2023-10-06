/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:05:26 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/11 18:39:26 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printx(char c)
{
	write(1, &c, 1);
}

void	ft_printy(char a, char b, char c)
{
	ft_printx (a);
	ft_printx (b);
	ft_printx (c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_printx (',');
		ft_printx (' ');
	}
}

void	ft_print_comb(void)
{
	char	i1;
	char	i2;
	char	i3;

	i1 = '0';
	while (i1 <= '7')
	{
		i2 = i1 + 1;
		while (i2 <= '8')
		{
			i3 = i2 +1;
			while (i3 <= '9')
			{
				ft_printy (i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
