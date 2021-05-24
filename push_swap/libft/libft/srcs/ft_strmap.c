/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:19:34 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:19:36 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*str2;
	int		i;

	str2 = (char*)s;
	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char*)malloc((size_t)(ft_strlen((char*)s) + 1));
	if (!str)
		return (NULL);
	while (str2[i])
	{
		str[i] = f(str2[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
