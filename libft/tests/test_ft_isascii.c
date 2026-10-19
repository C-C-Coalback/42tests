/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:46:02 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 14:54:59 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_isascii('a'), 1);
	ft_putnbr_fd(ft_isascii('1'), 1);
	ft_putnbr_fd(ft_isascii('B'), 1);
	ft_putnbr_fd(ft_isascii('\n'), 1);
	ft_putnbr_fd(ft_isascii('-'), 1);
	ft_putnbr_fd(ft_isascii(300), 1);
	return (0);
}
