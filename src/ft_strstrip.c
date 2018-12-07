/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 19:55:18 by hjo               #+#    #+#             */
/*   Updated: 2018/12/06 20:43:49 by hjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** interate until you meet first non-space char - save its position
** iterate to non space char from the end of str - save its position
*/

#include <stdio.h>
#include "libft.h"

char	*ft_strstrip(char *str)
{
	int		start;
	int		i;
	int		j;
	char	*ans;

	ans = NULL;
	i = 0;
	j = ft_strlen(str) - 1;
	while (ft_isspace(str[i]) && str[i])
		i++;
	while (ft_isspace(str[j]) && j > 0)
		j--;
	if (j == 0)
		return (NULL);
	j++;
	start = 0;
	ans = ft_strnew(j - i);
	if (!ans)
		return (NULL);
	ans = ft_strncpy(ans, str + i, j - i);
	return (ans);
}
