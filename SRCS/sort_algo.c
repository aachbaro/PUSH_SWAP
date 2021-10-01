/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:37:12 by aachbaro          #+#    #+#             */
/*   Updated: 2021/10/01 14:08:20 by aachbaro         ###   ########.fr       */
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
	t_link	*tmp;

	tmp = stacks->a;
	while (tmp)
	{
		if (tmp->val < 3)
		{
			get_out(stacks, tmp->val);
			tmp = stacks->a;
		}
		else
			tmp = tmp->next;
	}
	sort_fivetwo(stacks);
	if (stacks->b->val == 1)
		swap_b(stacks);
	push_a(stacks);
	push_a(stacks);
}

void	sort_fivetwo(t_objs *stacks)
{
	if (stacks->a->val == 3 && stacks->a->next->val == 5)
	{
		swap_a(stacks);
		rotate_a(stacks);
	}
	if (stacks->a->val == 4 && stacks->a->next->val == 5)
		rev_rotate_a(stacks);
	if (stacks->a->val == 4 && stacks->a->next->val == 3)
		swap_a(stacks);
	if (stacks->a->val == 5 && stacks->a->next->val == 4)
	{
		swap_a(stacks);
		rev_rotate_a(stacks);
	}
	if (stacks->a->val == 5 && stacks->a->next->val == 3)
		rotate_a(stacks);
}
