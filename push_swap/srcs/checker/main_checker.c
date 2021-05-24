/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:21:41 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:21:43 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_a(t_lstnum **a)
{
	t_lstnum *tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->next->n < tmp->n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

static void	treat_input(t_stack *a, t_stack *b, char *line, int *flag)
{
	while (get_next_line(0, &line) > 0)
	{
		if (!ft_strcmp(line, "sa") || !ft_strcmp(line, "sb")
			|| !ft_strcmp(line, "ss"))
			swapper(a, b, line, flag);
		else if (!ft_strcmp(line, "pa"))
		{
			push(&b->head, &a->head, &a->end);
			(*flag == 2) ? print_stacks(a->head, b->head) : 0;
		}
		else if (!ft_strcmp(line, "pb"))
		{
			push(&a->head, &b->head, &b->end);
			(*flag == 2) ? print_stacks(a->head, b->head) : 0;
		}
		else if (!ft_strcmp(line, "ra") || !ft_strcmp(line, "rb")
					|| !ft_strcmp(line, "rr"))
			rotater(a, b, line, flag);
		else if (!ft_strcmp(line, "rra") || !ft_strcmp(line, "rrb")
					|| !ft_strcmp(line, "rrr"))
			reverse_rotater(a, b, line, flag);
		else
			ft_error();
		free(line);
	}
}

int			main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	char	*line;
	int		flag;

	line = NULL;
	if (ac < 2)
		return (0);
	flag = 1;
	if (ft_strcmp(av[1], "-v") == 0)
	{
		flag = 2;
		build_stack(&a, ac, &av[flag], 1);
	}
	else
		build_stack(&a, ac, av, 0);
	b.head = NULL;
	b.end = NULL;
	treat_input(&a, &b, line, &flag);
	if (check_a(&a.head) == 1 && !b.head)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
