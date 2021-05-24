/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:18:19 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:18:20 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(intmax_t n, int fd)
{
	long	nb;

	nb = n;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
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
