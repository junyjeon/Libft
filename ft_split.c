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

int	wordcnt(char *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			cnt++;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	**res;

	if(!s)
		return (0);
	res = (char**)malloc(sizeof(char *) * wordcnt(s, c));
	if (!res)
		return (0);
	

	str = (char *)malloc()
	
}