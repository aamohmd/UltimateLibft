/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:54:20 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/14 20:58:37 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < num)
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}
