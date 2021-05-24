/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:20:30 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:20:32 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *dest, const char *src)
{
	int	i;
	int	size;

	i = 0;
	if (src[0] == '\0')
		return ((char*)dest);
	while (dest[i] != '\0')
	{
		if (src[0] == dest[i])
		{
			size = 1;
			while (dest[i + size] == src[size] && src[size] != '\0')
				size++;
			if (src[size] == '\0')
				return ((char*)&dest[i]);
		}
		i++;
	}
	return (0);
}
