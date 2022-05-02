/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:55:05 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/10/26 14:11:27 by pcoimbra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char *s, char c)
{
	int	n_words;
	int	is_word;

	n_words = 0;
	is_word = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			n_words++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (n_words);
}

static int	ft_lenght(char *s, char c)
{
	int	lenght;

	lenght = 0;
	while (*s != c && *s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		words;
	int		i;

	if (!s)
		return (0);
	words = ft_countwords((char *)s, c);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (0);
	i = 0;
	while (words--)
	{
		while (*s == c && *s)
			s++;
		ptr[i] = ft_substr((char *)s, 0, ft_lenght((char *)s, c));
		if (!ptr[i])
			return (0);
		s += ft_lenght((char *)s, c);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
