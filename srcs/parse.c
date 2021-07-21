/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnavarro <cnavarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 17:04:52 by cnavarro          #+#    #+#             */
/*   Updated: 2021/07/19 17:52:47 by cnavarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	no_args(int argc)
{
	if (argc < 2)
		exit(0);
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
			if (!ft_isdigit(argv[i][j]))
			{
				ft_strerror("No digit argument found", 1);
			}
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