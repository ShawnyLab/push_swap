/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrmax_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:14:04 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:14:06 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrmax_fd(uintmax_t n, int fd)
{
	uintmax_t	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
		return ;
	}
	ft_putnbr_fd(nb / 10, fd);
	ft_putnbr_fd(nb % 10, fd);
}
