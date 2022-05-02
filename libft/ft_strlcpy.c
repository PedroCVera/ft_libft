/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:51:59 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/22 11:36:17 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	ind;
	unsigned int	count;

	ind = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (src[ind] != '\0' && ind < (dstsize - 1))
		{
			dest[ind] = src[ind];
			ind++;
		}
		dest[ind] = '\0';
	}
	return (count);
}
