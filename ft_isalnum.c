/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:08:30 by aessadik          #+#    #+#             */
/*   Updated: 2023/11/02 19:29:30 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((ft_isalpha(c)) || (ft_isdigit(c)))
        return (c);
    return (0);
}
