/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:10:19 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/22 14:44:51 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (b);
}
/*
int	main(void)
{
	char	s1[] = "Eu gosto da moli";
	char	*str1;
	char	s2[] = "Eu gosto da moli";
	char	*str2;

	ft_memset(s1 + 3, 'T', 5);
	memset(s2 + 3, 'T', 5);
	str1 = s1;
	str2 = s2;
	printf("Meu:%s\n", s1);
	printf("Ori:%s\n", s2);
}*/
