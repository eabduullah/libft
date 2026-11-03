/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdulla <eabdulla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:58:59 by eabdulla          #+#    #+#             */
/*   Updated: 2026/11/02 22:42:53 by eabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = 0;
	while (i < size && dst[i])
		i++;
	srclen = ft_strlen(src);
	if (i < size)
	{
		j = 0;
		while ((i + j + 1) < size && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
		return (i + srclen);
	}
	return (size + srclen);
}
