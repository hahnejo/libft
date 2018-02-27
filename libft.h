/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:28:25 by hjo               #+#    #+#             */
/*   Updated: 2018/02/20 13:50:41 by hjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar		(char c);
void	ft_putstr		(char *s);
int		ft_strlen		(char *str);
void	*ft_memset		(void *str, int i, size_t len);
void	ft_bzero		(void *s, size_t n);

#endif
