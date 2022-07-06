/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:53:24 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/06 17:53:26 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memcpy(char *dest, 	char *src, int len)
{
	char *dst = dest;
	while (len-- > 0)
		*dest++ = *src++;
	return dest;
}
