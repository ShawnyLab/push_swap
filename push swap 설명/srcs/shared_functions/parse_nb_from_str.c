/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nb_from_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 21:37:58 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/22 21:37:59 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
**t_listnum형 메모리 할당 후 숫자 넣고 리턴
*/
static t_lstnum	*add_num_to_struct(long long num)
{
	t_lstnum	*new_num;

	if (num > INT_MAX || num < INT_MIN)
		ft_error();
	new_num = (t_lstnum*)ft_memalloc(sizeof(t_lstnum));
	new_num->n = num;
	new_num->next = NULL;
	return (new_num);
}

static void		lst_addend(t_lstnum **backtrack, t_lstnum *new_num)
{
	t_lstnum	*tmp;

	if (*backtrack == NULL)
		return ;
	tmp = *backtrack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_num;
	tmp = tmp->next;
	tmp->prev = *backtrack;
	*backtrack = tmp;
}
/*
**받아온 스택에 숫자로 변환해서 맨 뒤에 쌓음.
*/
static void		add_nb_to_list(t_stack *s, t_lstnum *new_num, char *str, int *i)
{
	while (str[*i])
	{
		while (ft_isblank(str[*i]))
			(*i)++;
		if (str[*i] == '\0')
			break ;
		if (!ft_isdigit(str[*i]) && !ft_isblank(str[*i])
			&& str[*i] != '-' && str[*i] != '+' && str[*i] != '\0')
			ft_error();
		if (ft_isdigit(str[*i]) && !ft_isdigit(str[*i + 1])
			&& !ft_isblank(str[*i + 1]) && str[*i + 1] != '\0')
			ft_error();
		if ((str[*i] == '-' || str[*i] == '+')
			&& !ft_isdigit(str[*i + 1]) && str[*i + 1] != '\0')
			ft_error();
		new_num = add_num_to_struct(ft_atoill(&str[*i]));
		lst_addend(&s->end, new_num);  //스택에 쌓음
		if (str[*i] == '-' || str[*i] == '+')
			(*i)++;
		while (ft_isdigit(str[*i]))
			(*i)++;
		if (str[*i] && !ft_isblank(str[*i]))
			ft_error();
	}
}
/*
** argv[1] 을 숫자로 바꾼 후 stack a->head 에 집어넣고 stack a 맨 뒤에 숫자로 변환해서 쌓음.
*/
void			parse_nb_from_first_str(t_stack *a, char *str)
{
	int			i;
	t_lstnum	*new_num;

	new_num = NULL;
	i = 0;
	if (!str)
		return ;
	while (ft_isblank(str[i]))  //공백이면 띄어넘기
		i++;
	if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')   //숫자도, 부호도 아니면 에러
		ft_error();
	a->head->n = ft_atoill(&str[i]);   //a->head 에 숫자 넣기
	if (a->head->n > INT_MAX || a->head->n < INT_MIN)
		ft_error();
	a->end = a->head;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] && !ft_isblank(str[i]))
		ft_error();
	add_nb_to_list(a, new_num, str, &i);
}
/*
**스택 a 뒤에 숫자를 쌓음
*/
void			parse_nb_from_second_str(t_stack *a, char *str)
{
	int			i;
	t_lstnum	*new_num;

	new_num = NULL;
	i = 0;
	if (!str)
		return ;
	add_nb_to_list(a, new_num, str, &i);
}
