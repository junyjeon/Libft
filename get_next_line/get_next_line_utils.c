/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:44:50 by junyojeo          #+#    #+#             */
/*   Updated: 2022/08/04 19:03:40 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	if (dest == src)
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	while (n-- > 0)
		*(d++) = *(s++);
	return (dest);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		src_len;
	int		i;
	int		j;

	src_len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(sizeof(char *) * (src_len + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = *(char *)&s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = *(char *)&s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
