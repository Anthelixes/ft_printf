/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deremia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 13:20:49 by deremia           #+#    #+#             */
/*   Updated: 2018/03/15 13:20:50 by deremia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelnode(t_list **head, t_list *node)
{
	t_list *temp;

	if (!node)
		return ;
	if (*head == node)
		*head = (*head)->next;
	else
	{
		temp = *head;
		while (temp->next != 0 && temp->next != node)
			temp = temp->next;
		if (temp->next == 0)
			return ;
		temp->next = temp->next->next;
	}
	free(node->content);
	free(node);
}
