/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:48:13 by marvin            #+#    #+#             */
/*   Updated: 2022/07/29 15:35:44 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(char const *s, char c, size_t i)
{
	size_t	cnt;

	cnt = 0;
	while (s[i++] != c)
		cnt++;
	return (cnt);
}

void	ft_free(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
		free(res[i]);
	free(res);
}

static char	**ft_division(char const *s, char c, char **res)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i] == '\0')
			{
				ft_free(res);
				return (0);
			}
			res[j] = ft_substr(s, i, word_len(s, c, i));
			i = i + word_len(s, c, i);
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
	ft_division(s, c, res);
	res[word_cnt] = NULL;
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
