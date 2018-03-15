/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstr_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:14:15 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:14:16 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

wchar_t	*ft_wstrdup(wchar_t *str)
{
	wchar_t	*dup;
	size_t	size;

	size = 0;
	while (str[size])
		++size;
	dup = (wchar_t *)malloc(sizeof(wchar_t) * (size + 1));
	if (!dup)
		return (NULL);
	size = 0;
	while (str[size])
	{
		dup[size] = str[size];
		size++;
	}
	dup[size] = '\0';
	return (dup);
}

size_t	ft_wstrlen(wchar_t *str)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	while (str[i])
	{
		count += ft_unicode_b(str[i]);
		i++;
	}
	return (count);
}

void	ft_prec_wstr(t_info *pfinfo, wchar_t *str)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	if (pfinfo->prec == -1)
		return ;
	if (ft_wstrlen(str) <= (size_t)pfinfo->prec)
		return ;
	while (str[i] && count <= (size_t)pfinfo->prec)
	{
		count += ft_unicode_b(str[i]);
		i++;
	}
	str[i - 1] = '\0';
}

char	*ft_wstr_to_str(wchar_t *wstr)
{
	char	*ret;
	size_t	i;
	size_t	pos;

	i = 0;
	pos = 0;
	ret = ft_strnew(ft_wstrlen(wstr));
	while (wstr[i])
	{
		ft_unicode_conv(wstr[i], ret + pos);
		pos += ft_unicode_b(wstr[i]);
		i++;
	}
	return (ret);
}

void	ft_wstr_conv(t_vector *vector, t_info *pfinfo, va_list ap)
{
	wchar_t *ctemp;
	char	*str;

	ctemp = va_arg(ap, wchar_t *);
	if (!ctemp)
		str = ft_null_str(pfinfo);
	else
	{
		ctemp = ft_wstrdup(ctemp);
		ft_prec_wstr(pfinfo, ctemp);
		str = ft_wstr_to_str(ctemp);
		free(ctemp);
	}
	ft_pad_handle(pfinfo, &str);
	ft_vector_append(vector, str);
	free(str);
}