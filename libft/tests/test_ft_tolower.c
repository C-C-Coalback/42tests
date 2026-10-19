/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_tolower.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:08:17 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:08:18 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	ft_putchar_fd(ft_tolower('a'), 1);
	ft_putchar_fd(ft_tolower('B'), 1);
	ft_putchar_fd(ft_tolower('-'), 1);
	ft_putchar_fd(ft_tolower('\n'), 1);
	ft_putchar_fd(ft_tolower('5'), 1);
}
