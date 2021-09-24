/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:37:12 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/24 18:11:59 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_objs *stacks)
{
	t_link	*tmp;
	int		med;

	tmp = stacks->stack_a;
	while (!is_sorted(*stacks))
	{
		med = get_median(stacks->stack_a);

	}
}
