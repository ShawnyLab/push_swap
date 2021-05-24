/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_gap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:13:19 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:13:20 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_gap(t_printf *list, char c, int len, int update_len)
{
	char	*str;

	if (len > 0)
	{
		if (update_len)
			list->len += len;
		if (!(str = ft_strnew(len)))
			exit(-1);
		ft_memset(str, c, len);
		write(1, str, len);
		free(str);
	}
}
