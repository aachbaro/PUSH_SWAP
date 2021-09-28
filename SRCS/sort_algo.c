/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:37:12 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/28 13:57:26 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_objs *stacks)
{
	if (!is_sorted(stacks->a))
		swap_a(stacks);
}

void	sort_three(t_objs *stacks)
{
	int	place_one;
	t_link *tmp;

	place_one = 1;
	tmp = stacks->a;
	while (tmp->val != 1)
	{
		tmp = tmp->next;
		place_one++;
	}
	if (place_one == 3 && stack+)
}

void	sort_five(t_objs *stacks)
{
	int		i;
	int		med;
	t_link	*tmp;

	i = 0;
	med = get_median(stacks->a);
	tmp = stacks->a;
	while (i < med)
	{
		if (tmp->data < med)
			push_b(stacks);
	}
}
