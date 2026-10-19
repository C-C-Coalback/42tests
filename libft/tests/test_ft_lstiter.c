/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_lstiter.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:05:42 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:05:59 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	dummy_function(void *content)
{
	ft_putendl_fd((char *)content, 1);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("Illuminor Szeras"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Captain Cato Sicarius")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Old One Eye")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Broderick Worr")));
	ft_lstiter(lst, &dummy_function);
	return (0);
}
