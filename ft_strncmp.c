/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:06:07 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/20 14:18:11 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	if ((s1[i] - s2[i]) < 0)
		return (-1);
	if ((s1[i] - s2[i]) > 0)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	s1[]= "hola";
	char	s2[]= "holo";
	ft_strncmp(s1, s2, -2);

	printf("%d ", ft_strncmp(s1, s2, -2));
	printf("%d", strncmp(s1, s2, -2));
	return 0;
}
