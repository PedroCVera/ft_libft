/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:07:46 by pcoimbra          #+#    #+#             */
/*   Updated: 2022/05/02 15:00:41 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s;
	t_list	*hel;

	s = NULL;
	while (lst)
	{
		hel = ft_lstnew(f(lst->content));
		if (!hel)
		{
			ft_lstclear(&s, del);
			return (NULL);
		}
		ft_lstadd_back(&s, hel);
		lst = lst->next;
	}
	return (s);
}
