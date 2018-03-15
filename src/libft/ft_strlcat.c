/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:32:11 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:32:12 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t returnval;

	if (size + ft_strlen(src) > ft_strlen(src) + ft_strlen(dst))
		returnval = ft_strlen(src) + ft_strlen(dst);
	else
		returnval = ft_strlen(src) + size;
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	if (size < 1)
		return (returnval);
	size--;
	while (*src && size > 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (returnval);
}
