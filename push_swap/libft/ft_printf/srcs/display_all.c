/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:13:02 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:13:04 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*display_all(t_printf *list)
{
	char	specifier;

	specifier = list->specifier_char;
	if (specifier == 'c')
		display_c(list);
	else if (specifier == 's')
		display_s(list);
	else if (specifier == 'd' || specifier == 'i')
		display_i(list);
	else if (specifier == 'o')
		display_o(list);
	else if (specifier == 'u')
		display_u(list);
	else if (specifier == 'x' || specifier == 'X')
		display_x(list);
	else if (specifier == 'p')
		display_p(list);
	else if (specifier == 'f')
		display_f(list);
	else
		display_other(list);
	return (list);
}
