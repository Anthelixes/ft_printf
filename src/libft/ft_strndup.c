/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:33:40 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:33:41 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t len)
{
	char	*dst;
	char	*cdst;

	if (!(dst = ft_strnew(len + 1)))
		return (0);
	cdst = dst;
	len++;
	while (--len > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (cdst);
}
