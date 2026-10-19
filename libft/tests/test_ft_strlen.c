/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                    :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:14:29 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/15 16:17:34 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	src[10];
	size_t	ret;

	src[0] = 'a';
	src[1] = 'a';
	src[2] = 'a';
	src[3] = '\0';
	ret = ft_strlen(src);
	ft_putnbr_fd(ret, 1);
}
