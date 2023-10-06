/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:46:23 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/25 11:00:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

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

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putchar(argv[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
