/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:14:13 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/23 16:12:02 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_objs *stacks)
{
	int	tmp;

	tmp = stacks->stack_a->data;
	if (list_len(stacks->stack_a) < 2)
		return ;
	stacks->stack_a->data = stacks->stack_a->next->data;
	stacks->stack_a->next->data = tmp;
	printf("sa\n");
}

void	swap_b(t_objs *stacks)
{
	int	tmp;

	tmp = stacks->stack_b->data;
	if (list_len(stacks->stack_b) < 2)
		return ;
	stacks->stack_b->data = stacks->stack_b->next->data;
	stacks->stack_b->next->data = tmp;
	printf("sb\n");
}

void	swap_ab(t_objs *stacks)
{
	int	tmp;

	tmp = stacks->stack_a->data;
	if (list_len(stacks->stack_a) < 2 || list_len(stacks->stack_b) < 2)
		return ;
	stacks->stack_a->data = stacks->stack_a->next->data;
	stacks->stack_a->next->data = tmp;
	tmp = stacks->stack_b->data;
	stacks->stack_b->data = stacks->stack_b->next->data;
	stacks->stack_b->next->data = tmp;
	printf("ss\n");
}

void	push_a(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->stack_b) == 0)
	{
		free(tmp);
		return ;
	}
	tmp = stacks->stack_b;
	stacks->stack_b = stacks->stack_b->next;
	tmp->next = stacks->stack_a;
	stacks->stack_a = tmp;
	printf("pa\n");
}

void	push_b(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->stack_a) == 0)
		return ;
	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	tmp->next = stacks->stack_b;
	stacks->stack_b = tmp;
	printf("pb\n");
}
