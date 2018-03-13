/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjo <hjo@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 21:21:30 by hjo               #+#    #+#             */
/*   Updated: 2018/03/12 22:23:34 by hjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize(char *s)
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	new[0] = ft_toupper(s[0]);
	i = 0;
	while (s[++i])
		if (!ft_isalnum(s[i - 1] && ft_isalnum(s[i]))
			new[i] = ft_toupper(s[i]);
		else
			new[i] = s[i];
		return (new);
}
