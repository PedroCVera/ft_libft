/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:55:38 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/25 17:14:44 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*help;

	if (*lst)
	{
		help = ft_lstlast(*lst);
		help->next = new;
	}
	else if (lst && !(*(lst)))
		*lst = new;
}
