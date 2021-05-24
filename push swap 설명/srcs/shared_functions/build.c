/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:37:48 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/22 21:37:49 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(-1);
}
/*
** 중복되는 숫자가 있는지 확인
*/
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
/*
**플래그와 인자 수에 따라 인자를 숫자로 변환해서 스택에 쌓음.
*/
void			build_stack(t_stack *a, int ac, char **av, int flag)  //현재 플래그 0
{
	int	i;

	i = 2;
	a->head = ft_memalloc(sizeof(t_lstnum));    //a 스택 헤드에 메모리 할당
	if (flag)   //플래그 1 이상
	{
		parse_nb_from_first_str(a, av[0]);
		ac--;
		i = 1;
	}
	else   //플래그 0
		parse_nb_from_first_str(a, av[1]);
	while (i < ac)
	{
		parse_nb_from_second_str(a, av[i]);
		i++;
	}
	if (!(check_double(a)))
		ft_error();
}
