/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 17:47:18 by hjo               #+#    #+#             */
/*   Updated: 2018/12/06 17:48:54 by hjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_atof(char *str)
{
	int		sign;
	int		dot;
	int		i;
	int		count;
	double	ans;

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
