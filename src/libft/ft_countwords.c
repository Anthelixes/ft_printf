/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:16:20 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:16:22 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_countwords(char const *s, char c)
{
	int words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			words++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (words);
}
