/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                   :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:11:39 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/15 16:20:16 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	src[5];
	char	dest[5];

	src[0] = '0';
	src[1] = '1';
	src[2] = '2';
	src[3] = '3';
	src[4] = '\0';
	dest[0] = 'a';
	dest[1] = 'b';
	dest[2] = 'c';
	dest[3] = 'd';
	dest[4] = '\0';
	ft_memmove(dest, src, 3);
	ft_putendl_fd(src, 1);
	ft_putendl_fd(dest, 1);
}
