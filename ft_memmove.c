/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:04:00 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/06 18:04:01 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, void *src, size_t n)
{
	char *from = (char *) src;
	char *to = (char *) dest;
	
	if (from == to || n = 0)
		return dest;
	if (to > from && to - from < (int)n)
	{
		int	i;

		i = n - 1;
		while (i >= 0)
			to[i] = from[i];
		return dest;
	}
	if (from > to && from - to < (int)n)
	{
		size_t	i;
		
		i = 0;
		while (i++ < n)
			to[i] = from[i];
		return dest;
	}
	memcpy(dest, src, n);
	return dest;
}
