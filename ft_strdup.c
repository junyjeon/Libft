/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:00:43 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/12 21:54:02 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		srclen;
	char	*src;

	if (!s1)
		return (NULL);
	srclen = ft_strlen(s1);
	src = (char *)malloc(sizeof(char) * srclen);
	if (!src)
		return (NULL);
	ft_memcmp(src, s1, srclen);
	return (src);
}
