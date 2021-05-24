/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:16 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:17 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*parse_convert(t_printf *list)
{
	size_t	j;

	j = 0;
	while (list->flags[j])
	{
		while (list->flags[j] == list->f_copy[list->i])
		{
			while (list->f_copy[list->i] == '-' && list->i++)
				list->flag_convert[0] = '-';
			while (list->f_copy[list->i] == '+' && list->i++)
				list->flag_convert[1] = '+';
			while (list->f_copy[list->i] == ' ' && list->i++)
				list->flag_convert[2] = ' ';
			while (list->f_copy[list->i] == '0' && list->i++)
				list->flag_convert[3] = '0';
			while (list->f_copy[list->i] == '#' && list->i++)
				list->flag_convert[4] = '#';
			j = 0;
		}
		j++;
	}
	return (list);
}
