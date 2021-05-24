/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:30 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:31 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*parse_precision(t_printf *list)
{
	list->precision = -1;
	while (list->f_copy[list->i] == '.')
	{
		list->i++;
		list->precision = 0;
	}
	while (list->f_copy[list->i] >= '0' && list->f_copy[list->i] <= '9')
	{
		list->precision = list->precision * 10 + (list->f_copy[list->i] - 48);
		list->i++;
	}
	return (list);
}
