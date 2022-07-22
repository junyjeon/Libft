/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:26:48 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 04:19:15 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	size_t	i;
	
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			res = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == s[i])
		res = (char *)&s[i];
	return (res);
}
