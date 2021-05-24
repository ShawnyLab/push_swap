/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:20:14 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:20:15 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char*)&s[i]);
	i = i - 1;
	while (s[i] && i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char*)&s[i]);
		}
		i--;
	}
	return (0);
}
