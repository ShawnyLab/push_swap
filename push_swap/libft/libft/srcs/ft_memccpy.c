/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:17:33 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:17:35 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str;
	const unsigned char	*str2;
	unsigned int		i;

	str = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		str[i] = str2[i];
		if ((unsigned char)c == str[i])
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
