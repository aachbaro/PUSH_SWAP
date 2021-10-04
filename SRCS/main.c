/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:39:37 by aachbaro          #+#    #+#             */
/*   Updated: 2021/10/04 18:11:13 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_objs	stacks;
	int		error;

	if (ac == 1)
		return (0);
	init_stacks(&stacks);
	error = get_stack(ac, av, &stacks);
	if (error == -1)
		return (ret_error(&stacks));
	error = check_double(&stacks);
	if (error == -1)
		return (ret_error(&stacks));
	get_val(&stacks);
	aff_list(stacks);
	sort_manager(&stacks);
	aff_list(stacks);
	free_list(stacks.a);
	return (0);
}

int	ret_error(t_objs *stacks)
{
	free_list(stacks->a);
	printf("Error\n");
	return (-1);
}
