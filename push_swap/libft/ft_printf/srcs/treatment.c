/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:15:13 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:15:14 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	treatment(t_printf *list)
{
	list->i++;
	parse_convert(list);
	parse_field_width(list);
	parse_precision(list);
	parse_len_mod(list);
	parse_specifier(list);
	display_all(list);
	return (list->len);
}
