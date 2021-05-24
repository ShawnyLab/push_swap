/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:18:33 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:18:34 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	int	i;

	i = 0;
	s[i] = ft_toupper(s[i]);
	while (s[++i])
	{
		s[i] = ft_tolower(s[i]);
		if (!ft_isalpha(s[i - 1]))
			s[i] = ft_toupper(s[i]);
	}
	return (s);
}
