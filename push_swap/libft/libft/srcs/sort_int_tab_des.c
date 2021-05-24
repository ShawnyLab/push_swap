/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab_des.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:21:00 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:21:01 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab_des(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}
