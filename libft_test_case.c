/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyojeo <junyojeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:10:28 by junyojeo          #+#    #+#             */
/*   Updated: 2022/07/08 23:10:42 by junyojeo         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*a;

	a = "abcde";
	printf("===========isalpha===========");
	printf("ft_isalpha: %d\nisalpha: %d\n", ft_isalpha('a'), isalpha('a'));
	printf("ft_isalpha: %d\nisalpha: %d\n", ft_isalpha('0'), isalpha('0'));
	printf("===========isdigit===========");
	printf("ft_isdigit: %d\nisdigit: %d\n", ft_isdigit('0'), isdigit('0'));
	printf("ft_isdigit: %d\nisdigit: %d\n", ft_isdigit('z'), isdigit('z'));
	printf("===========isalnum===========");
	printf("ft_isalnum: %d\nisalnum: %d\n", ft_isalnum('a'), isalnum('a'));
	printf("ft_isalnum: %d\nisalnum: %d\n", ft_isalnum('0'), isalnum('0'));
	printf("===========isascii===========");
	printf("ft_isascii: %d\nisascii: %d\n", ft_isascii(0), isascii(0));
	printf("ft_isascii: %d\nisascii: %d\n", ft_isascii(48), isascii(48));
	printf("ft_isascii: %d\nisascii: %d\n", ft_isascii(128), isascii(128));
	printf("===========isprint===========");
	printf("ft_isprint: %d\nisprint: %d\n", ft_isprint(32), isprint(32));
	printf("ft_isprint: %d\nisprint: %d\n", ft_isprint(127), isprint(127));
	printf("===========strlen ===========");
	printf("ft_strlen : %d\nstrlen : %d\n", ft_strlen("CHEKIN GANGJUNG"), strlen("CHEKIN GANGJUNG"));
	printf("===========memset ===========");
	printf("ft_memset : %d\nmemset : %d\n", ft_memset(a, 2, 4), memset(a, 2, 4));
	printf("=========== bzero ===========");
	printf("ft_bzero  : %d\nbzero  : %d\n", ft_bzero(a), bzero(a));
	printf("===========memcpy ===========");
	printf("ft_memcpy : %d\nmemcpy : %d\n", ft_memcpy(,,3), memcpy(,,3));
	printf("===========memmove===========");
	printf("ft_memmove: %d\nmemmove: %d\n", ft_memmove('a'), memmove('a'));
	printf("===========strlcpy===========");
	printf("ft_strlcpy: %d\nstrlcpy: %d\n", ft_strlcpy('a'), strlcpy('a'));
	printf("===========strlcat===========");
	printf("ft_strlcat: %d\nstrlcat: %d\n", ft_strlcat('a'), strlcat('a'));
	printf("===========strncmp===========");
	printf("ft_strncmp: %d\nstrncmp: %d\n", ft_strncmp('a'), strncmp('a'));
	printf("===========toupper===========");
	printf("ft_toupper: %d\ntoupper: %d\n", ft_toupper('a'), toupper('a'));
	printf("===========tolower===========");
	printf("ft_tolower: %d\ntolower: %d\n", ft_tolower('a'), tolower('a'));
	printf("===========strchr ===========");
	printf("ft_strchr : %d\nstrchr : %d\n", ft_strchr('a'), strchr('a'));
	printf("===========strrchr===========");
	printf("ft_strrchr: %d\nstrrchr: %d\n", ft_strrchr('a'), strrchr('a'));
	printf("===========memchr ===========");
	printf("ft_memchr : %d\nmemchr : %d\n", ft_memchr('a'), memchr('a'));
	printf("===========memcmp ===========");
	printf("ft_memcmp : %d\nmemcmp : %d\n", ft_memcmp('a'), memcmp('a'));
	printf("===========strnstr===========");
	printf("ft_strnstr: %d\nstrnstr: %d\n", ft_strnstr('a'), strnstr('a'));
	printf("=========== atoi  ===========");
	printf("ft_atoi   : %d\natoi   : %d\n", ft_atoi('a'), atoi('a'));
	return (0);
}
