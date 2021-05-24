/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_len_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:25 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:27 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*parse_len_mod(t_printf *list)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (list->len_mods[i])
	{
		while (list->len_mods[i] == list->f_copy[list->i])
		{
			list->len_mods_convert[j] = list->f_copy[list->i];
			list->len_mods_convert[j + 1] = '\0';
			list->i++;
			j++;
		}
		i++;
	}
	return (list);
}
