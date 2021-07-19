

#include "./header/push_swap.h"

t_node *create_a_stack(int argc, char **argv)
{
	t_node *ret;
	t_node *temp;
	t_node *head;
	int i;

	tmp = create_new_node(ft_atoi(argv[1]), NULL);
	ret = tmp;
	head = tmp;
	i = 2;
	while (i < argc)
	{
		tmp = create_new_node(ft_atoi(argv[i], head);
		head->next = tmp;
		tmp->before = head;
		head = tmp;
		i++;
	}
	return (ret);
}

int main (int argc, char **argv)
{
	t_node *a_stack;
	//t_node *b_stack;

	//arg_errors(argc, argv);
	a_stack = create_a_stack(argc, argv);
	printlist(a_stack);

	return (0);
}
