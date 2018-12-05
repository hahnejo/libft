#include <stdio.h>

double	ft_atof(char *str)
{
	int sign;
	int dot;
	int i;
	int count;
	double ans;

	ans = 0;
	dot = 0;
	i = -1;
	count = 0;
	if (str[0] == '-' && (++i) == 0)
		sign = -1;
	while (str[++i] && ((str[i] <= '9' && str[i] >= '0') || str[i] == '.'))
	{
		if (str[i] == '.' && (dot = 1) == 1)
			continue ;
		ans *= 10;
		ans += str[i] - '0';
		if (dot == 1)
			count++;
	}
	i = -1;
	while (++i < count)
		ans /= 10;
	return (sign * ans);
}

int main()
{
	char *s = "-0.54534";
	printf("%f", ft_atof(s));
	return (0);
}
