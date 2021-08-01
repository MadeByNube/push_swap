/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:50:00 by cnavarro          #+#    #+#             */
/*   Updated: 2021/07/22 14:18:51 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/push_swap.h"

t_node	*create_a_stack(int argc, char **argv)
{
	t_node *ret;
	t_node *tmp;
	t_node *head;
	int i;

	ret = NULL;
	head = NULL;
	tmp = NULL;
	i = 0;
	while (i < argc)
	{
		if (i == 0)
		{
			head = create_several_nodes(argv[i], head);
			tmp = head;
			while(tmp->before != NULL)
			{
				ret = tmp->before;
				tmp = ret;
			}
		}
		else
			head = create_several_nodes(argv[i], head);
		i++;
	}
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
