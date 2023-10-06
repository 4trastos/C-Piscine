/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:33:24 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/16 17:05:01 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 1;
	while (i < size)
	{
		i++;
		j = i;
		aux = tab[i];
		while (j > 0 && aux < tab[j - 1])
		{
			tab[j] = tab[j - 1];
			j = j - 1;
		}
		tab[j] = aux;
	}
	i = 0;
	while (i < size)
	{
		i++;
	}
}
/*
int	main(void)
{
	int	tab[]={1, 5, 7, 3, 5, 2, 1, 9, 7, 8, 9};
	int	size;

	size = 11;
	ft_sort_int_tab(tab, size);
	size = 0;
	while (size < 11)
	{
		printf("%d", tab[size]);
		size++;
	}
	return (0);
}*/
