/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:50:00 by cnavarro          #+#    #+#             */
/*   Updated: 2021/08/09 15:51:06 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/push_swap.h"

t_node	*create_a_stack(int argc, char **argv)
{
	t_node	*ret;
	t_node	*head;
	int		i;

	head = malloc(sizeof(t_node));
	ret = head;
	i = 1;
	while (i < argc)
	{
		head = create_several_nodes(argv[i], head);
		i++;
	}
	if (ret->next)
		ret = ret->next;
	return (ret);
}

int	main (int argc, char **argv)
{
	t_node *a_stack;
	//t_node *b_stack;
	arg_errors(argc, argv);
	a_stack = create_a_stack(argc, argv);
	printlist(a_stack);
	return (0);
}
