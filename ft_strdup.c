/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:14:12 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/28 05:06:00 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)malloc(ft_strlen(s1) + 1);
	if (!s)
		return (NULL);
	while (*(s1 + i))
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	*(s + i) = '\0';
	
	return (s);
}
