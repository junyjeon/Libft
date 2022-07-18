/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:29:15 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/18 21:59:22 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!len)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && len--)
	{
		if (haystack[i] == *needle)
		{
			if (ft_strcmp(&haystack[i], needle, ft_strlen(needle) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
