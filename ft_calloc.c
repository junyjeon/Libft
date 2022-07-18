/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:49:03 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/09 19:04:24 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	char	*cal;
	
	cal = 0;
	while (count--)
	{
		i = 0;
		while (size--)
		{
			cal[i] = 0;
			i++;
		}
	}
	return ((void *)cal);
}
