/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:50:35 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/12 14:39:19 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_printx(char c)
{
	write(1, &c, 1);
}

int	ft_printy(char a, char b, char c, char d)
{
	ft_printx (a);
	ft_printx (b);
	if (a <= '9' || b <= '9')
	{
		ft_printx (' ');
		ft_printx (c);
		ft_printx (d);
		if (c <= '9' || d <= '9')
		{	
			if (a != '9' || b != '8' || c != '9' || d != '9')
			{
				ft_printx (',');
				ft_printx (' ');
			}
			else if (a == '9' && b == '8' && c =='9' && d =='9')
				return (0);
		}
	}
	return (0);
}

void	bucle(char i1, char i2, char i3, char i4)
{
	i1 = '0';
	while (i1 <= '9')
	{
		i2 = i1;
		while (i2 <= '9')
		{
			i3 = i2;
			while (i3 <= '9')
			{
				i4 = '1';
				while (i4 <= '9')
				{
					ft_printy (i1, i2, i3, i4);
					i4++;
				}
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

void	ft_print_comb2(void)
{
	char	i1;
	char	i2;
	char	i3;
	char	i4;

	i1 = '0';
	i2 = '0';
	i3 = '0';
	i4 = '0';
	bucle(i1, i2, i3, i4);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
