/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:17:53 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:17:54 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*str;
	const unsigned char		*str2;
	size_t					i;

	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (!str && !str2)
		return (NULL);
	i = 0;
	if (str2 < str)
		while (++i <= len)
		{
			str[len - i] = str2[len - i];
		}
	else
		while (len-- > 0)
		{
			*(str++) = *(str2++);
		}
	return (dst);
}
