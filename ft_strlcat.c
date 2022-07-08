/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:39 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 04:09:48 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	char	*s;

	s = (char *)src;
	srclen = ft_strlen(s);
	dstlen = ft_strlen(dst);
	if (dstlen == srclen)
		return (dstsize + srclen);
	ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
	dst[dstsize - 1] = '\0';
	return (dstlen + srclen);
}
