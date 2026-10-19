/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:04:33 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 15:11:39 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	str[10];
	char	*res;

	str[0] = '1';
	str[1] = '2';
	str[2] = 'a';
	str[3] = '4';
	str[4] = 'A';
	str[5] = '2';
	str[6] = 'b';
	str[7] = '\0';
	res = (char *)ft_memchr(str, '2', ft_strlen(str));
	ft_putstr_fd(res, 1);
	return (0);
}
