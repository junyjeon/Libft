/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:48:13 by marvin            #+#    #+#             */
/*   Updated: 2022/07/26 18:58:42 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_len(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

static char	**ft_dupdup(char *str, char c, char **res)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			ft_substr(res[j], i, word_len(&str[i], c));
			i = i + word_len(&str[i], c);
			j++;
		}
		else
			i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_cnt;
	char	**res;

	if (!s)
		return (0);
	word_cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word_cnt++;
		i++;
	}
	res = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (!res)
		return (0);
	ft_dupdup((char *) s, c, res);
	res[word_cnt] = 0;
	return (res);
}

// int main(void) {
// 	char *string = "      split       this for   me  !       "; // x
// 	// char *string = "      split       this for   me  !       ";
// 	char **expected = ((char*[6]){"split", "this", "for", "me", "!", ((void *)0)});
// 	char **result = ft_split(string, ' ');
// 	int i = 0;
// 	while (result[i])
// 	{
// 		printf("i: %s\n", result[i]);
// 		i++;
// 	}
// }
