/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_commands_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:21:46 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:21:47 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_lstnum *a, t_lstnum *b)
{
	t_lstnum	*tmp;

	tmp = a;
	ft_printf(BBLUE);
	ft_printf("a: ");
	while (tmp)
	{
		ft_printf("%i, ", tmp->n);
		tmp = tmp->next;
	}
	tmp = b;
	ft_printf(BRED);
	ft_printf("\nb: ");
	while (tmp)
	{
		ft_printf("%i, ", tmp->n);
		tmp = tmp->next;
	}
	ft_printf("\n");
	ft_printf(DEFAULT);
}

void	swapper(t_stack *a, t_stack *b, char *line, int *flag)
{
	if (!ft_strcmp(line, "sa"))
		swap(&a->head);
	else if (!ft_strcmp(line, "sb"))
		swap(&b->head);
	else
	{
		swap(&a->head);
		swap(&b->head);
	}
	if (*flag == 2)
		print_stacks(a->head, b->head);
}

void	rotater(t_stack *a, t_stack *b, char *line, int *flag)
{
	if (!ft_strcmp(line, "ra"))
		ft_rotate(&a->head, &a->end);
	else if (!ft_strcmp(line, "rb"))
		ft_rotate(&b->head, &b->end);
	else
	{
		ft_rotate(&a->head, &a->end);
		ft_rotate(&b->head, &b->end);
	}
	if (*flag == 2)
		print_stacks(a->head, b->head);
}

void	reverse_rotater(t_stack *a, t_stack *b, char *line, int *flag)
{
	if (!ft_strcmp(line, "rra"))
		ft_reverse_rotate(&a->head, &a->end);
	else if (!ft_strcmp(line, "rrb"))
		ft_reverse_rotate(&b->head, &b->end);
	else
	{
		ft_reverse_rotate(&a->head, &a->end);
		ft_reverse_rotate(&b->head, &b->end);
	}
	if (*flag == 2)
		print_stacks(a->head, b->head);
}
