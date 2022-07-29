/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:07:30 by marvin            #+#    #+#             */
/*   Updated: 2022/07/29 17:45:01 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*add_num(char *s, int n, int i)
{
	if (n == 0)
		return (s);
	add_num(s, n / 10, i++);
	s[i] = n % 10 + '0';
}

static char	*add_arr(char *s, int n, int len)
{
	if (n == 0)
		s[0] = 0;
	while (len--)
	{
		s[len - 1] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}

static int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (10);
	else if (n < 0)
		n *= -1;
	else if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*s;

	len = ft_num_len(n);
	if (n < 0)
	{
		sign = 1;
		len++;
	}
	s = (char *)malloc(sizeof(char) * len + 1);
	if (!s)
		return (0);
	if (n < 0)
		s[0] = '-';
	if (n == -2147483648)
	{
		s[10] = '8';
		n = 214748364;
	}
	else if (n < 0)
		n *= -1;
	s = add_arr(&s[sign], n, len);
	s[len] = '\0';
	return (s);
}
