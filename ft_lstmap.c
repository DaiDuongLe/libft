/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dale <dale@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:58:57 by dale              #+#    #+#             */
/*   Updated: 2025/12/30 15:59:09 by dale             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		*deleteall(t_list *node, void (*del)(void *));
static t_list	*set_head(t_list *node, t_list *lst, void *(*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	head = set_head(node, lst, f);
	lst = lst->next;
	if (!lst)
		return (head);
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
			return (deleteall(head, del));
		new_node->content = f(lst->content);
		new_node->next = NULL;
		node->next = new_node;
		node = node->next;
		lst = lst->next;
	}
	return (head);
}

static t_list	*set_head(t_list *node, t_list *lst, void *(*f)(void *))
{
	node->content = f(lst->content);
	node->next = NULL;
	return (node);
}

static void	*deleteall(t_list *node, void (*del)(void *))
{
	t_list	*prev;

	while (node)
	{
		prev = node;
		node = node->next;
		del(prev->content);
		free(prev);
	}
	return (NULL);
}
