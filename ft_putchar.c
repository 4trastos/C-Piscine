/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:52:41 by davgalle          #+#    #+#             */
/*   Updated: 2023/07/09 14:22:08 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

/*void	main(void)
{
	char	c;

	c = 'z';
	ft_putchar(c);
}*/