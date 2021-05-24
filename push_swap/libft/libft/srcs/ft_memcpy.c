/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:17:46 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:17:47 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str;
	const unsigned char	*str2;

	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (!str && !str2)
		return (0);
	while (n > 0)
	{
		*(str++) = *(str2++);
		n--;
	}
	return (dst);
}
