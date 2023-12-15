/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:07:35 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/15 18:34:34 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	**ft_freestr(char **str, int x)
{
	while (x > 0)
	{
		x--;
		free(str[x]);
	}
	free(str);
	return (NULL);
}

static size_t	ft_i(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	ft_j(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		x;
	char	**str;

	i = 0;
	x = 0;
	if (s == NULL)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		i += ft_j(s + i, c);
		j = i;
		i += ft_i(s + i, c);
		if (i > j)
		{
			str[x] = ft_substr(s, j, i - j);
			if (str[x] == NULL)
				return (ft_freestr(str, x));
			x++;
		}
	}
	str[x] = NULL;
	return (str);
}
