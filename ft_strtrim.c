/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 05:03:26 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/18 21:14:36 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

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
