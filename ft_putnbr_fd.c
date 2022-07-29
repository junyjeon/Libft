/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 02:24:42 by marvin            #+#    #+#             */
/*   Updated: 2022/07/29 15:33:25 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	else if (n == 0)
		return ;
	else
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &"0123456789"[n % 10], 1);
	}
}
