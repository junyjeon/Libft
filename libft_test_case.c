#include <stdio.h>

int	main(void)
{
	printf("==========isalpha==========");
	printf("ft_isalpha: %d\nisalpha: %d\n", ft_isalpha('a'), isalpha('a'));
	printf("==========isdigit==========");
	printf("ft_isdigit: %d\nisdigit: %d\n", ft_isdigit('0'), isdigit('0'));
	printf("==========isalnum==========");
	printf("isalnum: %d\n", isalnum('a'));
	printf("==========isascii==========");
	printf("isascii: %d\n", isascii('a'));
	printf("==========isprint==========");
	printf("isprint: %d\n", isprint('a'));
	printf("==========strlen ==========");
	printf("strlen: %d\n", strlen('a'));
	printf("==========memset ==========");
	printf("memset : %d\n", memset('a'));
	printf("========== bzero ==========");
	printf(" bzero : %d\n", bzero('a'));
	printf("==========memcpy ==========");
	printf("memcpy : %d\n", memcpy('a'));
	printf("==========memmove==========");
	printf("memmove: %d\n", memmove('a'));
	printf("==========strlcpy==========");
	printf("strlcpy: %d\n", strlcpy('a'));
	printf("==========strlcat==========");
	printf("strlcat: %d\n", strlcat('a'));
	printf("==========strncmp==========");
	printf("strncmp: %d\n", strncmp('a'));
	printf("==========toupper==========");
	printf("toupper: %d\n", toupper('a'));
	printf("==========tolower==========");
	printf("tolower: %d\n", tolower('a'));
	printf("==========strchr ==========");
	printf("strchr : %d\n", strchr('a'));
	printf("==========strrchr==========");
	printf("strrchr: %d\n", strrchr('a'));
	printf("==========memchr ==========");
	printf("memchr : %d\n", memchr('a'));
	printf("==========memcmp ==========");
	printf("memcmp : %d\n", memcmp('a'));
	printf("==========strnstr==========");
	printf("strnstr: %d\n", strnstr('a'));
	printf("========== atoi  ==========");
	printf(" atoi  : %d\n", atoi('a'));
	return (0);
}
