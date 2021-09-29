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
	if (stacks->a->val == 1 && stacks->a->next->val == 3)
	{
		swap_a(stacks);
		rotate_a(stacks);
	}
	if (stacks->a->val == 2 && stacks->a->next->val == 3)
		rev_rotate_a(stacks);
	if (stacks->a->val == 2 && stacks->a->next->val == 1)
		swap_a(stacks);
	if (stacks->a->val == 3 && stacks->a->next->val == 2)
	{
		swap_a(stacks);
		rev_rotate_a(stacks);
	}
	if (stacks->a->val == 3 && stacks->a->next->val == 1)
		rotate_a(stacks);
}

void	sort_five(t_objs *stacks)
{
	int			med;
	t_link		*tmp;

	while (list_len(stacks->a) > 2)
	{
		med = get_median(stacks->a);
		tmp = stacks->a;
		while (tmp)
		{
			if (tmp->val < med)
			{
				get_out(stacks, tmp->val);
				tmp = stacks->a;
			}
			tmp = tmp->next;
		}
	}
}
