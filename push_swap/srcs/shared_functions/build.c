/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:22:13 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:22:13 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(-1);
}

static int		check_double(t_stack *a)
{
	t_lstnum	*tmp1;
	t_lstnum	*tmp2;
	int			num;

	tmp1 = a->head;
	while (tmp1)
	{
		num = tmp1->n;
		tmp2 = tmp1;
		while (tmp2->next)
		{
			if (num == tmp2->next->n)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (1);
}

void			build_stack(t_stack *a, int ac, char **av, int flag)
{
	int	i;

	i = 2;
	a->head = ft_memalloc(sizeof(t_lstnum));
	if (flag)
	{
		parse_nb_from_first_str(a, av[0]);
		ac--;
		i = 1;
	}
	else
		parse_nb_from_first_str(a, av[1]);
	while (i < ac)
	{
		parse_nb_from_second_str(a, av[i]);
		i++;
	}
	if (!(check_double(a)))
		ft_error();
}
