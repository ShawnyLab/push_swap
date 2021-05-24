/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:20:21 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:20:22 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	*str;

	if (!s || !c)
		return (NULL);
	str = ft_strnew(2);
	if (!str)
		return (NULL);
	str[0] = c;
	return (ft_strsplitcharset((char*)s, str));
}
