/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:38:30 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/25 11:54:17 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char		l;

	l = (char)c;
	str = s;
	while (*s)
		s++;
	if (l == 0)
		return ((char *)s);
	while (s >= str)
	{
		if (*s == l)
			return ((char *)s);
		s--;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "A moli e uma p-fofa";
	char	c = 'e';

	printf("C:%c |S1:%s |SC:%s\n", c, s1, ft_strchr(s1, c));
	printf("C:%c |S1:%s |SC:%s\n", c, s1, strchr(s1, c));
}*/
