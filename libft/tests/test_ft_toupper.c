/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_toupper.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:08:03 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:08:04 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putchar_fd(ft_toupper('a'), 1);
	ft_putchar_fd(ft_toupper('B'), 1);
	ft_putchar_fd(ft_toupper('-'), 1);
	ft_putchar_fd(ft_toupper('\n'), 1);
	ft_putchar_fd(ft_toupper('5'), 1);
}
