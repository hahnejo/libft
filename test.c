#include "libft.h"
#include "stdio.h"
#include <strings.h>
#include <stdlib.h>

void	assert()
{

}

int		main(void)
{
	char str[] = "hella";
	char str2[] = "hello";

	ft_putstr("hello");
	printf("\n");

	int len = ft_strlen("hello");
	printf("%d\n", len);

	//ft_memset(str, 'k', 5);
	printf("str_currently: %s\n", str);

	printf("My answer is %s\n", ft_memchr(str, 'l', 6));
	printf("Original function's answer is %s\n", memchr(str, 'o', 6));

	printf("My answer is %d\n", ft_memcmp(str, str2, 6));
	printf("Original function's answer is %d\n", memcmp(str, str2, 6));

	char str3[] = "LOLOLO";
	char str4[] = "123456";

	printf("My answer is %s\n", ft_strdup(str3));

	printf("My answer is %d\n", ft_atoi(str4));
	printf("Original answer is %d\n", ft_atoi(str4));

	//printf("strcpy: My ans is %s\n", ft_strcpy(str4, str3));


	//printf("strcpy: Original answer is %s\n", strcpy(str4, str3));
	printf("strcpy: My ans is %s\n", ft_strcpy(str3, str4));
	printf("strcpy: Original answer is %s\n", strcpy(str3, str4));

	//strlcat
	printf("strcpy: My answer is %lu\n", strlcat(str3, str4, 5));

	//strchr
	printf("My ans is %s\n", ft_strchr(str3, 3));

	//printf("%s\n", ft_strtrim(str1));

	char strsp[] = "*hello*fellow***students*";
	printf("strsplit test: %s\n", ft_strsplit(strsp, '*'));


	ft_bzero(str, 5);
	printf("My answer is %s\n", str);
	bzero(str, 5);
	printf("Original function's answer is %s\n", str);

	return 0;
}
