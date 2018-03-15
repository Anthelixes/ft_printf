/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:21:52 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:21:53 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*mem;
	unsigned char	*str;

	if (size == 0 || (mem = malloc(size)) == 0)
		return (0);
	str = (unsigned char *)mem;
	while (size--)
		*str++ = 0;
	return (mem);
}
