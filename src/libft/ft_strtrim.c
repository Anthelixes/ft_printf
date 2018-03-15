/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:35:59 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:36:00 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s || (str = (char *)malloc(sizeof(char))) == 0)
		return (0);
	if (*s == '\0' || !s)
		return (str);
	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
		s++;
	while (s[i])
		i++;
	while ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n') && i)
		i--;
	if ((str = ft_strnew(i)) == 0)
		return (0);
	while (j < i)
	{
		str[j] = s[j];
		j++;
	}
	return (str);
}
