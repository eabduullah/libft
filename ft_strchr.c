/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdulla <eabdulla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:58:59 by eabdulla          #+#    #+#             */
/*   Updated: 2026/11/02 22:43:55 by eabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*sc;

	sc = (char *)s;
	while (*sc)
	{
		if (*sc == (char)c)
			return (sc);
		sc++;
	}
	if (*sc == (char)c)
		return (sc);
	return (0);
}
