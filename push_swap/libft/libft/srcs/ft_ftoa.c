/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:15:47 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:15:48 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long double	rounding(int precision, long double f)
{
	long double	rounding;
	int			d;

	rounding = 0.5;
	if (f < 0)
		rounding *= -1;
	d = 0;
	while (d++ < precision)
		rounding /= 10.0;
	return (rounding);
}

char				*ft_ftoa(long double f, int precision, int dot)
{
	unsigned long long	dec;
	char				*str_int;
	char				*str_dec;
	int					i;

	f += rounding(precision, f);
	f *= (f < 0) ? -1 : 1;
	dec = f;
	str_int = ft_itoa(dec);
	f = precision ? (f - dec) : 0;
	str_dec = ft_strnew(precision + 2);
	str_dec[0] = (dot) ? '.' : '\0';
	i = 1;
	while (precision-- > 0)
	{
		f *= 10;
		dec = f;
		f -= dec;
		str_dec[i++] = dec + '0';
	}
	return (ft_strjoin(str_int, str_dec));
}
