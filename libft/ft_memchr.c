/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:20:32 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/26 15:36:54 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;
	int				ind;

	ss = (unsigned char *)s;
	ind = 0;
	if (n == 0)
		return (NULL);
	if (c == 0)
		return (ss + ft_strlen((char const *)ss));
	while (n-- > 0)
	{
		if (*ss == (unsigned char) c)
		{
			return (ss);
		}
		ss++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "banana";

	printf("char:%c |string:%s", 'c', ft_memchr(str, 'n', 10));
}*/
