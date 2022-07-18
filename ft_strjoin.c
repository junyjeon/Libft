/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:02:42 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/12 17:55:21 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		src_len;

	if (!s1 || !s2)
		return (NULL);
	src_len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(sizeof(char *) * src_len);
	if (str == NULL)
		return (0);
	while (*s1)
	{
		*str = *(char *)s1;
		str++;
		s1++;
	}
	while (*s2)
	{
		*str = *(char *)s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (str);
}
