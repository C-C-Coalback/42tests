/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_strjoin.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:18:14 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:18:19 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	init_string(char *src)
{
	src[0] = 'H';
	src[1] = 'e';
	src[2] = 'd';
	src[3] = 'g';
	src[4] = 'e';
	src[5] = ' ';
	src[6] = 'F';
	src[7] = 'u';
	src[8] = 'n';
	src[9] = 'd';
	src[10] = '\0';
}

void	init_string_again(char *src)
{
	src[0] = ':';
	src[1] = ' ';
	src[2] = 'N';
	src[3] = 'o';
	src[4] = 'u';
	src[5] = 'n';
	src[6] = '.';
	src[7] = '\0';
}

int	main(void)
{
	char	src[20];
	char	extra[10];
	char	*dest;

	init_string(src);
	init_string_again(extra);
	dest = ft_strjoin(src, extra);
	ft_putendl_fd(dest, 1);
}
