/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imaxtoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:17:29 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:17:31 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_imaxtoa(intmax_t value)
{
	uintmax_t	i;
	intmax_t	size;
	char		*ret;

	i = (value < 0) ? -value : value;
	size = 1 + (value < 0);
	while ((i /= 10))
		size++;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	ret[size] = '\0';
	i = (value < 0) ? -value : value;
	ret[--size] = "0123456789"[i % 10];
	while ((i /= 10))
		ret[--size] = "0123456789"[i % 10];
	if (value < 0)
		ret[--size] = '-';
	return (ret);
}
