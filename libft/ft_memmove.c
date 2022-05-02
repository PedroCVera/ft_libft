/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:22:07 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/22 15:25:34 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}
/*
int	main(void)
{
	char	s1[] = "batman";
	char	s3[] = "batman";
	char	s2[] = "batman";
	char	s4[] = "barman";

	ft_memcpy(&s1[2], s2, 4);
	printf("%s\n", s1);
	memcpy(&s3[2], s4, 4);
	printf("%s", s3);
}*/
