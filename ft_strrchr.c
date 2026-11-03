/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdulla <eabdulla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:58:59 by eabdulla          #+#    #+#             */
/*   Updated: 2026/11/02 22:42:35 by eabdulla         ###   ########.fr       */
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
