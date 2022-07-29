/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:07:30 by marvin            #+#    #+#             */
/*   Updated: 2022/07/29 17:48:03 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_addnum(int n, char *str, int len)
{
	size_t	i;

	i = 1;
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[len - 1] = '8';
			len--;
			n = 214748364;
		}
		else if (n < 0)
			n *= -1;
	}
	while (len--)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
	}
}

static int	ft_get_n_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		if (n == -2147473648)
			return (10);
		n *= -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*itoa(int n)
{
	size_t	i;
	size_t	n_len;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	n_len = ft_get_n_len(n);
	str = (char *)malloc(n_len + 1);
	if (!str)
		return (NULL);
	ft_addnum(n, str, n_len);
	return (str);
}
