/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:50:23 by cnavarro          #+#    #+#             */
/*   Updated: 2021/07/19 16:57:24 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_node	*create_new_node(int num, t_node *before)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	new_node->num = num;
	new_node->next = NULL;
	new_node->before = before;
	return (new_node);
}

void	printlist(t_node *head)
{
	t_node *temp;
	
	temp = head;
	while (temp != NULL)
	{
		printf("%d\n", temp->num);
		temp = temp->next;
	}
}
