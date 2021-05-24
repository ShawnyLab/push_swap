/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_field_width.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:21 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:22 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*parse_field_width(t_printf *list)
{
	list->width = 0;
	while (list->f_copy[list->i] >= '0' && list->f_copy[list->i] <= '9')
	{
		list->width = list->width * 10 + (list->f_copy[list->i] - 48);
		list->i++;
	}
	return (list);
}
