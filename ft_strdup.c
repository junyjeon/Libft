/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:00:43 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/26 18:08:34 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s_len;
	char	*dst;

	if (!(*s1))
	{
		dst = (char *)malloc(sizeof(char) * 1);
		return (dst);
	}
	s_len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * s_len + 1);
	if (!dst)
		return (0);
	ft_memcpy(dst, s1, s_len);
	dst[s_len] = '\0';
	return (dst);
}
