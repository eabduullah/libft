/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdulla <eabdulla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:58:59 by eabdulla          #+#    #+#             */
/*   Updated: 2026/11/02 22:45:21 by eabdulla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_d(long n)
{
	int	c;

	c = 0;
	if (n <= 0)
	{
		c = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long		nb;
	int			cont;
	char		*d;

	nb = n;
	cont = cont_d(nb);
	d = malloc(sizeof(char) * (cont + 1));
	if (!d)
		return (NULL);
	if (n == 0)
		d[0] = '0';
	if (nb < 0)
	{
		d[0] = '-';
		nb = -nb;
	}
	d[cont] = '\0';
	cont--;
	while (nb > 0)
	{
		d[cont] = (nb % 10) + '0';
		nb = nb / 10;
		cont--;
	}
	return (d);
}
