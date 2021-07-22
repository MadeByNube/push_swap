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
	/*
	if (ft_strchr(argv[i], ' '))
	{
		create_several_nodes(argv[i], head);
	}
	else
	{
		tmp = create_new_node(ft_atoi(argv[1]), NULL);
		ret = tmp;
		head = tmp;
		i = 2;
	}*/


// Me he quedado en pasar los elementos a una lista considerando que hay
// varios elementos en algún argumento. He pensado que mejor considerar
// que cada argumento tenga varios posibles valores y hacer eso con todos.

	head = NULL;
	while (i < argc)
	{
		if (ft_strchr(argv[i], ' '))
		{
			tmp = create_several_nodes(argv[i], head);
			ret = tmp;
			head = tmp;
		}
		else
		{
			tmp = create_new_node(ft_atoi(argv[i]), head);
			head->next = tmp;
			tmp->before = head;
			head = tmp;
		}
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
