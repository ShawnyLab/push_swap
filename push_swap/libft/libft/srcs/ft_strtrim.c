/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:20:39 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:20:40 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char				*str;
	int					len;
	unsigned int		i;
	unsigned int		size;
	unsigned int		z;

	if (!s)
		return (NULL);
	size = ft_strlen((char*)s);
	len = size - 1;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	z = 0;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		len--;
		z++;
	}
	size = (size < i + z) ? 0 : (size - i - z);
	if (!(str = ft_strnew(size)))
		return (NULL);
	str = ft_strncpy(str, (char*)s + i, size);
	return (str);
}
