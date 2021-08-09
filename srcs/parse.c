/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:04:52 by cnavarro          #+#    #+#             */
/*   Updated: 2021/08/09 15:43:30 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void args_inception(char *str)
{
	char **splitted;
	int i;
	int j;

	i = 0;
	splitted = ft_split(str, ' ');
	while (splitted[i])
	{
		j = 0;
		while(splitted[i][j])
		{
			if (!ft_isdigit(splitted[i][j]) && !(splitted[i][j] = '-'))
			{
				ft_free_matrix(splitted);
				ft_strerror("Digit argument not found", 2);
			}
			j++;
		}
		i++;
	}
	ft_free_matrix(splitted);
}

void	no_args(int argc)
{
	if (argc < 2)
	{
		ft_strerror("No arguments", 1);
		exit(0);
	}
}

void	args_invalid(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if (ft_strchr(argv[i], ' '))
				args_inception(argv[i]);
			else if (!ft_isdigit(argv[i][j]))
				ft_strerror("Digit argument not found", 2);
			j++;
		}
		i++;
	}
}

void	arg_errors(int argc, char **argv)
{
	no_args(argc);
	args_invalid(argv);
}
