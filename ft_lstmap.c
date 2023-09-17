/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwijaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:13:19 by cwijaya           #+#    #+#             */
/*   Updated: 2023/09/13 18:13:20 by cwijaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static t_list	*newnode(
	t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new;

	content = f(lst->content);
	if (!content)
		return (NULL);
	new = ft_lstnew(content);
	if (!new)
	{
		del(content);
		return (NULL);
	}
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		current = newnode(lst, f, del);
		if (!current)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, current);
		lst = lst->next;
	}
	return (new_lst);
}
