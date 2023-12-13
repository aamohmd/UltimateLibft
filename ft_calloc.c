/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:43:29 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/12 11:19:38 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*null;
	size_t	i;

	null = malloc(count * size);
	if (null == NULL)
		return (NULL);
	i = 0;
	ft_bzero(null, count * size);
	return (null);
}
