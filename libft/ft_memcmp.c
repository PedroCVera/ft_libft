/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:17:40 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/22 16:56:38 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			break ;
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*str1 - *str2);
}
/*
int	main(void)
{
	char	s1[] = {0, 0, 127, 0};
	char	s2[] = {0, 0, 42, 0};

	printf("Meu:%d\n", ft_memcmp(s1, s2, 4));
	printf("Ori:%d\n", memcmp(s1, s2, 7));
}*/
