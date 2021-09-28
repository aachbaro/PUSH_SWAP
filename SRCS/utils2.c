/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:28:30 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/28 13:48:02 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_link *stack)
{
	t_link	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	get_val(t_objs *stacks)
{
	t_link	*tmp;
	t_link	*tmp2;
	int		i;

	tmp = stacks->a;
	while (tmp)
	{
		tmp2 = stacks->a;
		i = 0;
		while (tmp2)
		{
			if (tmp2->data > tmp->data)
				i++;
			tmp2 = tmp2->next;
		}
		tmp->val = list_len(stacks->a) - i;
		tmp = tmp->next;
	}
}

int	get_median(t_link *stack)
{
	int		min;
	int		max;
	t_link	*tmp;

	tmp = stack;
	min = tmp->val;
	max = tmp->val;
	while (tmp)
	{
		if (tmp->val < min)
			min = tmp->val;
		if (tmp->val > max)
			max = tmp->val;
		tmp = tmp->next;
	}
	return (((max - min) / 2) + 1);
}
