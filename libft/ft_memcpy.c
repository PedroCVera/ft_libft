/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:37:15 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/26 15:12:05 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i != n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char s1[] = "batman";
	char s2[] = "batman";
	char s3[] = "batman";
	char s4[] = "batman";
	ft_memcpy(s1 + 2, s2, 4);
	printf("%s\n", s1);
//	(void) s2;
//	(void) s4;
	memcpy(s3 + 2, s4, 4);
	printf("%s", s3);
}*/
