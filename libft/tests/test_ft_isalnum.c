/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:46:02 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 14:55:17 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_isalnum('a'), 1);
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putnbr_fd(ft_isalnum('B'), 1);
	ft_putnbr_fd(ft_isalnum('\n'), 1);
	ft_putnbr_fd(ft_isalnum('-'), 1);
	ft_putnbr_fd(ft_isalnum(300), 1);
	return (0);
}
