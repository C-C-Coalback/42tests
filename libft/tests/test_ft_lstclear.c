/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_lstclear.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:06:15 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:06:46 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("Illuminor Szeras"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Captain Cato Sicarius")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Old One Eye")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Broderick Worr")));
	ft_lstclear(&lst, free);
	if (lst)
		ft_putstr_fd("list not cleared", 1);
	else
		ft_putstr_fd("list cleared", 1);
	return (0);
}
