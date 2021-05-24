/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinspark <jinspark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:17:18 by jinspark          #+#    #+#             */
/*   Updated: 2021/05/24 18:17:19 by jinspark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew_str(char *content)
{
	t_list	*tmp;
	int		i;
	char	*arr;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
		tmp->next = NULL;
		return (tmp);
	}
	arr = malloc(sizeof(char) * ft_strlen(content) + 1);
	i = 0;
	while (content[i])
	{
		arr[i] = content[i];
		i++;
	}
	arr[i] = '\0';
	tmp->content = (void *)arr;
	tmp->next = NULL;
	return (tmp);
}
