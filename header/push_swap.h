#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct s_node
{
	int	num;
	struct s_node *next;
	struct s_node *before;
}				t_node;
t_node	*create_a_stack(int argc, char **argv);
void	printlist(t_node *head);

#endif
