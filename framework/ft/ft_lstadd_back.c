/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:32:12 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/08 07:13:18 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (lst)
	{
		last = lst;
		lst = lst->next;
	}
	return (last);
}

void	ft_lstadd_back(t_list **alst, void *content)
{
	t_list	*new;
	t_list	*last;

	new = ft_lstnew(content);
	if (new == NULL)
		return ;
	last = ft_lstlast(*alst);
	if (last != NULL)
		last->next = new;
	else
		*alst = new;
}
