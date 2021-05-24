/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:17:25 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:17:26 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **list)
{
	t_list	*pre;
	t_list	*cur;
	t_list	*next;

	pre = NULL;
	cur = *list;
	while (cur)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}
	*list = pre;
}
