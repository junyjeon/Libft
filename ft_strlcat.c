/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:20:39 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/06 19:28:34 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = strlen(src);
	dstlen = strlen(dst, maxlen);
	if (dstlen == srclen)
		return (maxlen + srclen);
	else
	{
		memcpy(dst + dstlen, src, maxlen - dstlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
