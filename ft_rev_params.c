/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:45:17 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/25 13:13:25 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

void	ft_putchar(char arg[])
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	write(1, arg, i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (1 <= i)
		{
			ft_putchar(argv[i]);
			i--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
