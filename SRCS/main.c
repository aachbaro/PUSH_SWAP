/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:39:37 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/24 18:14:08 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_objs	stacks;

	if (check_double(ac, av) == -1 || check_int(ac, av) == -1)
	{
		printf("Error\n");
		return (-1);
	}
	init_stacks(&stacks);
	get_stack(ac, av, &stacks);
	get_val(&stacks);
	aff_list(stacks);
	sort_med(&stacks, get_median(stacks.stack_a));
	aff_list(stacks);
	free_list(stacks.stack_a);
	return (0);
}
