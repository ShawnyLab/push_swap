/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:34 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:34 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*parse_specifier(t_printf *list)
{
	size_t	j;

	j = 0;
	while (list->specifier_list[j])
	{
		if (list->f_copy[list->i] == list->specifier_list[j])
			list->specifier_char = list->specifier_list[j];
		j++;
	}
	return (list);
}
