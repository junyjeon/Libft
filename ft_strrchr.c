/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:26:48 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/11 17:04:34 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	while (*s)
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
<<<<<<< HEAD
	if ((unsigned char)c == s[i])
		res = (char *)&s[i];
	return (res);
=======
	if (*s == c)
		tmp = (char *)s;
	return (tmp);
>>>>>>> 679922673306e283c855ca0dfc342a15dd481923
}
