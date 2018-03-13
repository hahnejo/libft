/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjo <hjo@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 20:00:48 by hjo               #+#    #+#             */
/*   Updated: 2018/03/10 20:00:50 by hjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	locates first occurrence of null term str s2 in null termed str\
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	int		l;

	if (!ft_strlen(s2))
		return ((char *)s1);
	i = -1;
	good = 0;
	while (*(s1 + ++i) && !l)
	{
		if (*(s1 + 1) == *(s2 + 0))
		{
			j = 0;
			k = i;
			l = 1;
			while (*(s2 + j))
				if (*(s2 + j++) != *(s1 + k++))
					l = 0;
			if (l)
				return ((char *)s1 + i);
		}
	}
	return (NULL);
}
