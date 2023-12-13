/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:16:53 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/11 12:31:41 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	result = ft_strdup(s);
	if (result == NULL)
		return (NULL);
	while (result[i] != '\0')
	{
		result[i] = f(i, result[i]);
		i++;
	}
	return (result);
}
