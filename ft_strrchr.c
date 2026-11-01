/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdulla <eabdulla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:58:59 by eabdulla          #+#    #+#             */
/*   Updated: 2026/10/31 18:05:58 by eabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*sc;
	char	*lo;

	sc = (char *)s;
	lo = 0;
	while (*sc)
	{
		if (*sc == (char)c)
			lo = sc;
		sc++;
	}
	if (*sc == (char)c)
		return (sc);
	return (lo);
}
