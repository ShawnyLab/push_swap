/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hopham <hopham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:30:32 by hopham            #+#    #+#             */
/*   Updated: 2019/10/23 10:12:35 by hopham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strdup() function allocates sufficient memory for a copy of the string s1,
** does the copy, and returns a pointer to it. The pointer may subsequently
** be used as an argument to the function free(3). If insufficient memory
** is available, NULL is returned and errno is set to ENOMEM.
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	dest = (char*)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
