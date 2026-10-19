/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algarfie <algarfie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:59:01 by algarfie          #+#    #+#             */
/*   Updated: 2026/10/14 15:11:32 by algarfie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putendl_fd(ft_itoa(20), 1);
	ft_putendl_fd(ft_itoa(-20), 1);
	ft_putendl_fd(ft_itoa(-40000), 1);
	ft_putendl_fd(ft_itoa(-49617), 1);
	ft_putendl_fd(ft_itoa(20260), 1);
	ft_putendl_fd(ft_itoa(0), 1);
}
