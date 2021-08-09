/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:50:23 by cnavarro          #+#    #+#             */
/*   Updated: 2021/08/09 15:02:52 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_node *create_several_nodes(char *str, t_node *head)
{
	char **splitted;
	t_node *tmp;
	int i;

	splitted = ft_split(str, ' ');
	i = 0;
	while (splitted[i])
	{
		tmp = create_new_node(ft_atoi(splitted[i]), head);
		head->next = tmp;
		tmp->before = head;
		head = tmp;
		i++;
	}
	return (head);
}

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

void ft_strerror(char *str, int num)
{
	ft_putstr_fd(str, ft_strlen(str));
	exit(num);
}
