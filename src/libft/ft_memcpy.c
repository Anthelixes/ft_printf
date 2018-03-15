/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:23:26 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:23:28 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d_str;
	const unsigned char	*s_str;

	d_str = (unsigned char *)dst;
	s_str = (const unsigned char *)src;
	while (n--)
		*d_str++ = *s_str++;
	return (dst);
}
