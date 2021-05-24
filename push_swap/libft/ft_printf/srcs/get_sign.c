/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sign.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:11 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:13 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	get_sign(t_printf *list, double nb)
{
	if (nb < 0)
		return ('-');
	if (list->flag_convert[1] == '+')
		return ('+');
	if (list->flag_convert[2] == ' ')
		return (' ');
	return ('\0');
}
