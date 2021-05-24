/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:46:19 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 17:44:51 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		split_a_to_b(t_stack *a, t_stack *b, t_list **solution)
{
	char	tmp[a->ac * 4];
	int		count;
	long	median;

	tmp[0] = '\0';
	count = get_count(a);      //count : 현재 a stack 의 개수
	ft_printf("count A : %d\n", count);
	median = NO_MED;
	if (count > 11)
		median = get_true_median(a);
	else if (count > 2 && count <= 11)
		median = get_special_median_a(a);
	ft_printf("median A : %d\n", median);
	if (median != NO_MED)
		split_from_med_a(a, b, (int)median, tmp);
	else
		sort_a(a, count, tmp);
	ft_printf("a to b : %s\n", tmp);
	if (tmp[0])
		ft_lstadd_end(solution, ft_lstnew_str(tmp));
	if (median == NO_MED)
	{
		a->p[++(a->top)] = a->head;
		return (1);
	}
	return (0);
}
/*
**정렬 되어 있는지 확인
*/
int		sorted(t_stack *a)
{
	t_lstnum	*tmp;

	tmp = a->head;
	while (tmp && tmp->next)
	{
		if (tmp->n > tmp->next->n)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	push_b(t_stack *b, t_stack *a, int count, char *tmp)
{
	int	i;

	i = 0;
	if (count == -1)
		count = 3;
	while (i < count)
	{
		push(&b->head, &a->head, &a->end);
		ft_strcat(tmp, "pa\n");
		i++;
	}
}

void	b_to_a(t_stack *a, t_stack *b, t_list **solution)
{
	char	tmp[a->ac * 4];
	int		count;
	long	median;

	tmp[0] = '\0';
	count = get_count(b);    //b 스택의 개수
	ft_printf("count B : %d\n", count);
	median = NO_MED;
	if (count > 6)
		median = get_true_median(b);
	else if (count > 2 && count <= 6)
		median = get_special_median_b(b);
	ft_printf("median B : %d\n", median);
	if (median != NO_MED)
		split_from_med_b(a, b, (int)median, tmp);
	else
		sort_b(b, count, tmp);
	if (median == NO_MED)
		push_b(b, a, count, tmp);
	if (tmp[0])
		ft_lstadd_end(solution, ft_lstnew_str(tmp));
	ft_printf("b to a : %s\n", tmp);
}

t_list	*solve(t_stack *a, t_stack *b)
{
	t_list	*solution;

	solution = ft_lstnew("\0", 1);
	while (!sorted(a) || b->head) // a 스택이 정렬되지 않았거나, b 스택이 존재한다면,
	{
		if (!sorted(a))
		{
			while (split_a_to_b(a, b, &solution) == 0)
				;
		}
		else
			a->p[++(a->top)] = a->head;
		b_to_a(a, b, &solution);
	}
	ft_printf("end\n");
	return (solution);
}
