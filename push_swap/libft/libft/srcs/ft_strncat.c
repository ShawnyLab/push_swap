/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:19:44 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:19:45 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	i = 0;
	len_src = ft_strlen(s2);
	len_dst = ft_strlen(s1);
	n = (len_src < n) ? len_src : n;
	while (n--)
	{
		*(s1 + len_dst + i) = *(s2 + i);
		i++;
	}
	*(s1 + len_dst + i) = '\0';
	return (s1);
}
