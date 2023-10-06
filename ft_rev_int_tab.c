/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:21:38 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/14 11:28:22 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		z;
	int		temp;

	i = 0;
	z = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[z];
		tab[z] = temp;
		i++;
		z--;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size;

	size = 9; 

	ft_rev_int_tab(tab, size);
	size = 0;
	while (size < 9)
	{
		printf("%d", tab[size]);
		size++;
	}
	return (0);
}*/
