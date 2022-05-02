/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:38:16 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/12/17 11:14:28 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
char	my_func(unsigned int i, char str)
{
	(void) i;
	return (str - 32);
}

int	main(void)
{
	char str[10] = "helloz";
	printf("Original: <%s>\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("Result: <%s>\n", result);
	return (0);
}*/
