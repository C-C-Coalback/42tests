/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:46:02 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 14:56:34 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_isprint('a'), 1);
	ft_putnbr_fd(ft_isprint('1'), 1);
	ft_putnbr_fd(ft_isprint('B'), 1);
	ft_putnbr_fd(ft_isprint('\n'), 1);
	ft_putnbr_fd(ft_isprint('-'), 1);
	ft_putnbr_fd(ft_isprint(300), 1);
	return (0);
}
