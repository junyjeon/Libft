/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:48:13 by marvin            #+#    #+#             */
/*   Updated: 2022/07/15 21:48:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcnt(char *s, char c, char **res)
{
	size_t	cnt;
	size_t	i;
	size_t	j;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] && s[i] != c)
			{
				j++;
				i++;
			}
			res[cnt] = ft_strdup(s, i, j);
			cnt++;
		}
		else
			i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	**res;

	if(!s)
		return (0);
	str = (char *)s;
	res = (char**)malloc(sizeof(char *) * wordcnt(str, c, res));
	if (!res)
		return (0);
	return (res);
}