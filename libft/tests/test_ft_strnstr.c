/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:15:29 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/16 17:03:54 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	init_string(char *src)
{
	src[0] = 'H';
	src[1] = 'e';
	src[2] = 'd';
	src[3] = 'N';
	src[4] = 'o';
	src[5] = 'u';
	src[6] = 'n';
	src[7] = 'u';
	src[8] = 'n';
	src[9] = 'd';
	src[10] = '\0';
}

void	init_string_again(char *src)
{
	src[0] = 'N';
	src[1] = 'o';
	src[2] = 'u';
	src[3] = 'n';
	src[4] = '\0';
}

int	main(void)
{
	char	dest[20];
	char	src[10];
	char	*res;

	init_string(dest);
	init_string_again(src);
	res = ft_strnstr(dest, src, ft_strlen(dest));
	ft_putstr_fd(res, 1);
}
