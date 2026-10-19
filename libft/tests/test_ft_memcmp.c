/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:04:33 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 15:18:58 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_memcmp("test", "tEst", 4), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_memcmp("tEst", "test", 4), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_memcmp("test", "test", 4), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_memcmp("btst", "test", 4), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_memcmp("best", "test", 4), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
