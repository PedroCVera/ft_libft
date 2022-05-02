/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:58:44 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/22 11:35:53 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

unsigned int	st_strlen(char *dest)
{
	unsigned int	ind;

	ind = 0;
	while (dest[ind] != '\0')
		ind++;
	return (ind);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	char			*dst;
	char			*src_start;
	unsigned int	dst_len;
	unsigned int	remaining;

	dst = dest;
	src_start = (char *)src;
	remaining = dstsize;
	while (remaining-- != 0 && *dst != '\0')
		dst++;
	dst_len = dst - dest;
	remaining = dstsize - dst_len;
	if (remaining == 0)
		return (dst_len + st_strlen((char *)src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*dst++ = *src;
			remaining--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_len + (src - src_start));
}
/*
int	main(void)
{
	char	s1[] = "banana";
	char	s2[6];

	printf("%zu|%zu\n", ft_strlcat(s1, s2, 6),strlcat(s1, s2, 6));
}*/
