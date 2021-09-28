/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:39:37 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/28 13:46:10 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_objs	stacks;

	if (ac == 1)
		return (0);
	if (check_double(ac, av) == -1 || check_int(ac, av) == -1)
	{
		printf("Error\n");
		return (-1);
	}
	init_stacks(&stacks);
	get_stack(ac, av, &stacks);
	get_val(&stacks);
	aff_list(stacks);
	sort_manager(&stacks);
	aff_list(stacks);
	free_list(stacks.a);
	return (0);
}
