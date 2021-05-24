/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_exception_char.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:13:11 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:13:12 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_exception_char(char c, t_printf *list)
{
	if (c == '+')
	{
		write(1, "+", 1);
		list->len++;
	}
	if (c == ' ')
	{
		write(1, " ", 1);
		list->len++;
	}
}
