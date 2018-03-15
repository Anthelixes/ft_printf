/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:35:05 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:35:07 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int start;
	int end;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		ft_swap(str + start, str + end, sizeof(char));
		start++;
		end--;
	}
	return (str);
}
