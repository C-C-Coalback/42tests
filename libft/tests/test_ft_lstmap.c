/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   test_ft_lstmap.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: algarfie <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/10/15 16:04:31 by algarfie       #+#    #+#                */
/*   Updated: 2026/10/15 16:05:30 by algarfie       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_map(void *c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)c;
	while (tmp[i])
	{
		if (tmp[i] == 'e')
			tmp[i] = 'E';
		i = i + 1;
	}
	return (c);
}

void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew(ft_strdup("Illuminor Szeras"));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Captain Cato Sicarius")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Old One Eye")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Broderick Worr")));
	new = ft_lstmap(lst, &ft_map, &ft_del);
	while (new)
	{
		ft_putendl_fd((char *)new->content, 1);
		new = new->next;
	}
	return (0);
}
