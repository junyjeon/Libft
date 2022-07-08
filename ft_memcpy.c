/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:53:24 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/07 20:10:41 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dst;

	dest = dst;
	while (n-- > 0)
		*dest++ = *src++;
	return (dst);
}
