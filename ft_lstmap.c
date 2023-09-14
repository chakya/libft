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

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	new_lst = ft_lstnew(f(lst->content));
	lst = lst->next;
	while(lst)
	{
		ft_lstadd_back(lst, f(lst->content));
		lst = lst->next;
	}
	return (lst);
}
