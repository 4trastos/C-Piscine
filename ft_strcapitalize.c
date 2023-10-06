/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:41:02 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/18 17:23:55 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_star(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_star(str, i);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[i] = str[i] - 32;
	i++;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		if ((str[i - 1] == ' ') || (str[i - 1] >= 33 && str[i - 1] <= 45)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64)
			|| (str[i - 1] >= 91 && str[i - 1] <= 96)
			|| (str[i - 1] >= 123 && str[i - 1] <= 126))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[]= "elurREtan KANTARi dabiltza ? ma+riGOR9rringo 9 eTA 9kilkerrak";
	ft_strcapitalize(str);

	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
