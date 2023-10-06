/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:52:43 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/22 12:10:34 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		z = z * 10;
		z = z + str[i] - '0';
		i++;
	}
	if (j % 2 != 0)
		z = z * -1;
	return (z);
}
/*
int	main(void)
{
	char	str[]="   ---+--+1234ab567";

	printf("%d", ft_atoi(str));
	return 0;
}*/
