/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:07:30 by marvin            #+#    #+#             */
/*   Updated: 2022/07/21 19:50:13 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static void	rev_string(char *str, int len)
// {
// 	int		i;
// 	char	tmp;

// 	i = 0;
// 	while (i < len / 2)
// 	{
// 		tmp = str[i];
// 		str[i] = str[len - i];
// 		str[len - i] = tmp;
// 		i++;
// 	}
// }

// static void	add_arr(int n, char *str, int len)
// {
// 	size_t i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		str[i] = n % 10;
// 		n /= 10;
// 		i++;
// 	}
// 	if (n < 0)
// 	{
// 		str[i] = '-';
// 		i++;
// 	}
// 	rev_string(str, len);
// 	str[i] = '\0';
// }

// static int	ft_intlen(int n)
// {
// 	int	len;

// 	len = 0;
// 	if (n == -2147483648)
// 		return (10);
// 	else if (n < 0)
// 		n *= -1;
// 	else if (n == 0)
// 		return (1);
// 	while (n)
// 	{
// 		n /= 10;
// 		len++;
// 	}
// 	return (len);
// }

// char	*ft_itoa(int n)
// {
// 	size_t	len;
// 	size_t	sign;
// 	char	*str;

// 	sign = 0;
// 	len = ft_intlen(n);
// 	if (n < 0)
// 		len++;
// 	str = (char *)malloc(sizeof(char *) * len + 1);
// 	if (n == -2147483648)
// 	{
// 		str[0] = '8';
// 		n = 214748364;
// 	}
// 	else if (n < 0)
// 		n *= -1;
// 	add_arr(n, str, len);
// 	return (str);
// }
