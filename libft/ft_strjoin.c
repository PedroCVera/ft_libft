/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:30:42 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/27 11:43:15 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*weirdup(char *str1, char *str2, unsigned int s1l, unsigned int s2l)
{
	char	*dest;
	int		ind;
	int		jnd;

	ind = 0;
	jnd = 0;
	dest = (char *)malloc((s1l + s2l + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	s2l = s2l + s1l;
	while (str1[ind] != '\0')
	{
		dest[ind] = str1[ind];
		ind++;
	}
	while (str2[jnd] != '\0')
	{
		dest[ind] = str2[jnd];
		ind++;
		jnd++;
	}
	dest[ind] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ss1;
	char			*ss2;
	unsigned int	s1len;
	unsigned int	s2len;

	if (!s1 || !s2)
		return (NULL);
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	s1len = ft_strlen(ss1);
	s2len = ft_strlen(ss2);
	return (weirdup(ss1, ss2, s1len, s2len));
}
