/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:04:00 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/07 20:06:22 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (from == to || n = 0)
		return (dest);
	if (dst >  && to - from < (int)n)
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
