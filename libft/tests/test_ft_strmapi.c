/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                   :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:14:40 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/15 16:17:15 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	dummy_function(unsigned int i, char str)
{
	if (i == 0)
	{
		str = ft_toupper(str);
		return (str);
	}
	str = ft_tolower(str);
	return (str);
}

int	main(void)
{
	char	src[10];
	char	*dest;

	src[0] = 'a';
	src[1] = 'A';
	src[2] = 'a';
	src[3] = '\0';
	dest = ft_strmapi(src, dummy_function);
	ft_putendl_fd(src, 1);
	ft_putendl_fd(dest, 1);
}
