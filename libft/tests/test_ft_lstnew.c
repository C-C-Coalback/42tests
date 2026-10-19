/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_lstnew.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:02:45 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:02:53 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_putendl_fd(node1->content, 1);
	ft_putendl_fd(node1->next->content, 1);
	ft_putendl_fd(node1->next->next->content, 1);
	return (0);
}
