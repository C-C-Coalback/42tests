/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                  :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:13:12 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/15 16:18:51 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	init_string(char *src)
{
	src[0] = 'A';
	src[1] = 'n';
	src[2] = ' ';
	src[3] = 'e';
	src[4] = 'X';
	src[5] = 'a';
	src[6] = 'm';
	src[7] = 'p';
	src[8] = 'l';
	src[9] = 'e';
	src[10] = ' ';
	src[11] = 't';
	src[12] = 'e';
	src[13] = 'X';
	src[14] = 't';
	src[15] = '\0';
}

void	dummy_function(unsigned int i, char *str)
{
	if (i == 0)
	{
		str[i] = ft_toupper(str[i]);
		return ;
	}
	str[0] = ft_tolower(str[0]);
}

int	main(void)
{
	char	src[20];

	init_string(src);
	ft_striteri(src, dummy_function);
	ft_putendl_fd(src, 1);
}
