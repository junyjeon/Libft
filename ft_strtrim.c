/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:03:26 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/29 14:04:00 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

<<<<<<< HEAD
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*str;
// 	int		start;
// 	int		i;
// 	int		j;

// 	if (!s1 || !set)
// 		return (0);
// 	str = (char *)malloc(sizeof(char *) + ft_strlen(s1));
// 	if (!str)
// 		return (0);
// 	i = 0;
// 	while (s1[i])
// 	{
// 		j = 0;
// 		while (set[j])
// 		{
// 			if (s1[i] != set[j])
// 			{
// 				start = i;
// 				break ;
// 			}
// 			j++;
// 		}
// 		if (s1[i] != set[j])
// 			break ;
// 		i++;
// 	}
// 	while (s1[i])
// 	{
// 		while (*set)
// 		{
// 			if (*s1 == *set)
// 				break ;
// 			set++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }
=======
static int	ft_find(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_front(char const *s1, char const *set)
{
	int	i;

	i = -1;
	while (s1[++i])
	{
		if (!ft_find(s1[i], set))
			return (i);
	}
	return (-1);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (--i)
	{
		if (!ft_find(s1[i], set))
			return (i);
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (ft_front(s1, set) == -1 && ft_end(s1, set) == -1)
		return (ft_strdup(""));
	str = ft_substr(s1, ft_front(s1, set), ft_end(s1, set) - ft_front(s1, set) + 1);
	return (str);
}
>>>>>>> 2635d02a154054708630fcaaacff2a33e5a6390e
