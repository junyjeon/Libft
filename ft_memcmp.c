/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:29:16 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 03:58:05 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*x1;
	unsigned char	*x2;

	if (n == 0)
		return (0);
	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (*x1++ > *x2++)
			return (*x1 - *x2);
		if (*x1++ < *x2++)
			return (*x2 - *x1);
	}
	return (0);
}
