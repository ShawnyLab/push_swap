/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:13:07 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:13:08 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*display_c(t_printf *list)
{
	char	c;

	c = va_arg(list->args, int);
	if (list->flag_convert[3] == '0' && list->flag_convert[0] != '-')
		display_gap(list, '0', list->width - 1, 1);
	else if (list->flag_convert[0] != '-')
		display_gap(list, ' ', list->width - 1, 1);
	write(1, &c, 1);
	list->len++;
	if (list->flag_convert[0] == '-')
		display_gap(list, ' ', list->width - 1, 1);
	return (list);
}
