/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:39:37 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/17 14:26:32 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_objs	stacks;
	int		i;

	init_stacks(&stacks);
	i = 0;
	if (check_double(ac, av) == -1)
	{
		printf("Error\n");
		return (-1);
	}
	get_stack(ac, av, &stacks);
	aff_list(stacks.stack_a);
	free_list(stacks.stack_a);
	return (0);
}
