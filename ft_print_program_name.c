/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:00:26 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/24 16:11:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	main(int argc, char *argv[])
{
	char	*i;
	int		size;

	size = 0;
	i = argv[0];
	if (argc > 0)
	{
		while (i[size] != '\0')
		{
			size++;
		}
		write(1, i, size);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}
/* i es el nombre del program */
