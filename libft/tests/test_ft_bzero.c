/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:26:09 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 14:31:15 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	int	str[5];
	int	i;

	str[0] = 1;
	str[1] = 4;
	str[2] = 3;
	str[3] = 2;
	str[4] = 0;
	ft_bzero(str, 2);
	i = 0;
	while (i < 5)
	{
		ft_putnbr_fd(str[i], 1);
		ft_putchar_fd('\n', 1);
		i = i + 1;
	}
	return (0);
}
