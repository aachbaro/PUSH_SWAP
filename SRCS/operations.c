/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:14:13 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/24 16:37:18 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_objs *stacks)
{
	int	tmp;
	int	tmp2;

	tmp = stacks->stack_a->data;
	tmp2 = stacks->stack_a->val;
	if (list_len(stacks->stack_a) < 2)
		return ;
	stacks->stack_a->data = stacks->stack_a->next->data;
	stacks->stack_a->val = stacks->stack_a->next->val;
	stacks->stack_a->next->data = tmp;
	stacks->stack_a->next->val = tmp2;
	printf("sa\n");
}

void	swap_b(t_objs *stacks)
{
	int	tmp;
	int	tmp2;

	tmp = stacks->stack_b->data;
	tmp2 = stacks->stack_b->val;
	if (list_len(stacks->stack_b) < 2)
		return ;
	stacks->stack_b->data = stacks->stack_b->next->data;
	stacks->stack_b->val = stacks->stack_b->next->val;
	stacks->stack_b->next->data = tmp;
	stacks->stack_b->next->val = tmp2;
	printf("sb\n");
}

void	swap_ab(t_objs *stacks)
{
	int	tmp;
	int	tmp2;

	tmp = stacks->stack_a->data;
	tmp2 = stacks->stack_a->val;
	if (list_len(stacks->stack_a) < 2 || list_len(stacks->stack_b) < 2)
		return ;
	stacks->stack_a->data = stacks->stack_a->next->data;
	stacks->stack_a->val = stacks->stack_a->next->val;
	stacks->stack_a->next->data = tmp;
	stacks->stack_a->next->val = tmp2;
	tmp = stacks->stack_b->data;
	tmp2 = stacks->stack_b->val;
	stacks->stack_b->data = stacks->stack_b->next->data;
	stacks->stack_b->val = stacks->stack_b->next->val;
	stacks->stack_b->next->data = tmp;
	stacks->stack_b->next->val = tmp2;
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
