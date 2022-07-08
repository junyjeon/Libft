/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:04:00 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/08 23:10:45 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len);
{
	char *from;
	char *to;

	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	if (from == to || len = 0)
		return (dst);
	if (to - from < (int)len)
	{
		int	i;

		i = n - 1;
		while (i >= 0)
			to[i] = from[i];
		return (dest);
	}
	if (from > to && from - to < (int)n)
	{
		size_t	i;
		
		i = 0;
		while (i++ < n)
			to[i] = from[i];
		return (dest);
	}
	memcpy(dest, src, n);
	return (dest);
}
