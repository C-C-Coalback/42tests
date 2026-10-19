/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_lstdelone.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:07:04 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:07:14 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("sussus amogus"));
	ft_lstdelone(lst, free);
	ft_putstr_fd("??????", 1);
	return (0);
}
