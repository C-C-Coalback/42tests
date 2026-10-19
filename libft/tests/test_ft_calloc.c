/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_calloc.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/14 14:41:59 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/14 14:44:05 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	*str;

	str = ft_calloc(3, sizeof(char));
	ft_putnbr_fd(str[0], 1);
	return (0);
}
