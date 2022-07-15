/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 00:07:06 by marvin            #+#    #+#             */
/*   Updated: 2022/07/16 00:07:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (s1[j - i] && ft_strchr(set, s1[j - 1]))
		j--;
	ptr = (char *)malloc(sizeof(char *) * (j - i + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, &s1[i], j - i + 1);
	eturn(ptr);
}