/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:53:31 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/07 20:40:57 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned char	*dst;

	dst = (unsigned char *)b;
	while (len-- > 0)
		*b++ = c;
	return (dst);
}
