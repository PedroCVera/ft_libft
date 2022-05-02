/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:38:37 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/22 14:45:19 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		ind;
	char	*dest;

	ind = 0;
	dest = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	while (s1[ind] != '\0')
	{
		dest[ind] = s1[ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "banana";
	
	printf("String:%s|copy:%s\n", s1, ft_strdup(s1));
	printf("String:%s|copy:%s", s1, strdup(s1));
}*/
