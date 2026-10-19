/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:46:02 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 14:56:06 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_isdigit('a'), 1);
	ft_putnbr_fd(ft_isdigit('1'), 1);
	ft_putnbr_fd(ft_isdigit('B'), 1);
	ft_putnbr_fd(ft_isdigit('\n'), 1);
	ft_putnbr_fd(ft_isdigit('-'), 1);
	ft_putnbr_fd(ft_isdigit(300), 1);
	return (0);
}
