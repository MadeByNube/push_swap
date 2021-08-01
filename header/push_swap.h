/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:50:13 by cnavarro          #+#    #+#             */
/*   Updated: 2021/07/19 17:27:24 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct s_node
{
	int	num;
	struct s_node *next;
	struct s_node *before;
}				t_node;
t_node	*create_several_nodes(char *str, t_node *head);
t_node	*create_new_node(int num, t_node *before);
t_node	*create_a_stack(int argc, char **argv);
void	printlist(t_node *head);
void	arg_errors(int argc, char **argv);
void	ft_strerror(char *str, int num);
#endif
