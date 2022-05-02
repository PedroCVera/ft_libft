/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:36:43 by pcoimbra          #+#    #+#             */
/*   Updated: 2022/05/02 15:01:38 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cursor;

	cursor = (t_list *)malloc(sizeof(t_list));
	if (!cursor)
		return (NULL);
	cursor->content = content;
	cursor->next = NULL;
	return (cursor);
}
