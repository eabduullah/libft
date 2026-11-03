/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdulla <eabdulla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:58:59 by eabdulla          #+#    #+#             */
/*   Updated: 2026/11/02 22:43:49 by eabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	c = malloc(i + 1);
	if (!c)
		return (0);
	i = 0;
	while (s[i])
	{
		c[i] = s[i];
		i++;
	}
	c[i] = s[i];
	return (c);
}
