/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:19:26 by marvin            #+#    #+#             */
/*   Updated: 2022/07/18 21:43:06 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write((unsigned int)fd, &s, 1);
}
