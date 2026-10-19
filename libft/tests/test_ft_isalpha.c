/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:46:02 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 14:55:06 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putnbr_fd(ft_isalpha('a'), 1);
	ft_putnbr_fd(ft_isalpha('1'), 1);
	ft_putnbr_fd(ft_isalpha('B'), 1);
	ft_putnbr_fd(ft_isalpha('\n'), 1);
	ft_putnbr_fd(ft_isalpha('-'), 1);
	ft_putnbr_fd(ft_isalpha(300), 1);
	return (0);
}
