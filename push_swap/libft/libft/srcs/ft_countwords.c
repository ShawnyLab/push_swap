/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:15:43 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:15:44 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	size_t	count;
	int		inside_a_word;

	inside_a_word = 0;
	count = 0;
	while (*s)
	{
		if (!inside_a_word && *s != c)
			count++;
		inside_a_word = (*s == c) ? 0 : 1;
		s++;
	}
	return (count);
}
