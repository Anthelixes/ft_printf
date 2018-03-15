/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:34:15 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:34:16 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	char *start;

	if ((str = (char *)malloc(sizeof(char) * size + 1)) == 0)
		return (0);
	start = str;
	while (size--)
		*str++ = '\0';
	*str = '\0';
	return (start);
}
