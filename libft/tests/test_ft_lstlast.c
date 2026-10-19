/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_lstlast.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:03:50 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:04:10 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	t_list	*lst;
	t_list	*last_node;

	lst = ft_lstnew(ft_strdup("Illuminor Szeras"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Captain Cato Sicarius")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Old One Eye")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Broderick Worr")));
	last_node = ft_lstlast(lst);
	ft_putstr_fd(last_node->content, 1);
	return (0);
}
