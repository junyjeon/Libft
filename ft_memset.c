/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:53:31 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 04:27:28 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dst;

	dst = (unsigned char *)s;
	while (n-- > 0)
		*dst++ = c;
	return (s);
}
