/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:20:10 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:20:11 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	size;

	i = 0;
	if (!*src)
		return ((char*)dest);
	while (dest[i] != '\0' && i < len)
	{
		if (src[0] == dest[i])
		{
			size = 1;
			while (dest[i + size] == src[size] && i + size < len
			&& src[size] != '\0')
				size++;
			if (src[size] == '\0')
				return ((char*)&dest[i]);
		}
		i++;
	}
	return (0);
}
