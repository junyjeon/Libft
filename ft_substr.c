/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:02:18 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/12 18:43:56 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*src;

	if (!s || start == 0 || len == 0)
		return (NULL);
	src = (char *)s;
	str = (char *)malloc(sizeof(char *) * len);
	if (!str)
		return (NULL);
	while (len--)
	{
		*str = src[start];
		start++;
		str++;
	}
	return (str);
}
