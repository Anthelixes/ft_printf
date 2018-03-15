/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insrt_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:17:42 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:17:45 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_insrt_to_str(char **s1, char *s2)
{
	char *str;
	char *s1cpy;
	char *new;

	if (!s1 || !s2)
		return ;
	new = ft_strnew(ft_strlen(*s1) + ft_strlen(s2) + 1);
	str = new;
	s1cpy = *s1;
	while (*s2)
		*str++ = *s2++;
	while (*s1cpy)
		*str++ = *s1cpy++;
	*str = '\0';
	free(*s1);
	*s1 = new;
}
