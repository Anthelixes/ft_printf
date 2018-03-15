/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:20:04 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:20:05 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	unsigned int	i;
	int				size;
	char			*ret;

	value = (base != 10 && value < 0) ? -value : value;
	i = (base == 10 && value < 0) ? -value : value;
	size = 1 + (base == 10 && value < 0);
	while ((i /= base))
		size++;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	ret[size] = '\0';
	i = (base == 10 && value < 0) ? -value : value;
	ret[--size] = "0123456789ABCDEF"[i % base];
	while ((i /= base))
		ret[--size] = "0123456789ABCDEF"[i % base];
	if ((base == 10) && value < 0)
		ret[--size] = '-';
	return (ret);
}
