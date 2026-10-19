/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:05:16 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/15 16:11:04 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_atoi("0"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("2371"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("-2371"), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_atoi("-2000020"), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
