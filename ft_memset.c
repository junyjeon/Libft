/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:53:31 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/06 18:50:08 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memset(void *dst0, int val, size_t length)
{
    size_t	t;
    size_t	c;
    unsigned char  *dst;

    dst = dst0;
    if (length < 3 * sizeof(size_t))
    {
        while (length != 0)
        {
            *dst++ = val;
            --length;
        }
        return;
    }
}
