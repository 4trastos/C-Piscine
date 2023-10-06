/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:42:11 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/16 17:25:33 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char src[]	= "Hello";
	char dest[]	= "Salut";
	
	printf(" %s ", strcpy(dest, src));
	printf(" %s ", dest);
//	ft_strcpy(str_dest, str_src);
//	ft_putstr(str_src);
//	ft_putstr(str_dest);
	return (0);
}*/
