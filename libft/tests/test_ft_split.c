/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                     :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:09:36 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/15 16:19:19 by algarfie       ########   odam.nl        */
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

int	main(void)
{
	char	src[20];
	char	**dest;
	int		i;

	init_string(src);
	dest = ft_split(src, ' ');
	i = 0;
	while (i < 3)
	{
		ft_putendl_fd(dest[i], 1);
		i = i + 1;
	}
}
