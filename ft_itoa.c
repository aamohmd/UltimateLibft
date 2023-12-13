/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:30:15 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/10 17:08:38 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*num;

	len = ft_numlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	num = (char *)malloc((len + 1) * sizeof(char));
	if (num == NULL)
		return (NULL);
	num[len] = '\0';
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		num[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}
