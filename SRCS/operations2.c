/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:00:34 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/23 17:08:21 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->stack_a) < 2)
		return ;
	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	add_link(&stacks->stack_a, tmp->data);
	free(tmp);
	printf("ra\n");
}

void	rotate_b(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->stack_b) < 2)
		return ;
	tmp = stacks->stack_b;
	stacks->stack_b = stacks->stack_b->next;
	add_link(&stacks->stack_b, tmp->data);
	free(tmp);
	printf("rb\n");
}

void	rotate_ab(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->stack_a) < 2 || list_len(stacks->stack_b) < 2)
		return ;
	tmp = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	add_link(&stacks->stack_a, tmp->data);
	free(tmp);
	tmp = stacks->stack_b;
	stacks->stack_b = stacks->stack_b->next;
	add_link(&stacks->stack_b, tmp->data);
	free(tmp);
	printf("rr\n");
}

void	rev_rotate_a(t_objs *stacks)
{
	t_link	*tmp1;

	tmp1 = NULL;
	if (list_len(stacks->stack_a) < 2)
		return ;
	tmp1 = stacks->stack_a;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp1->next->next = stacks->stack_a;
	stacks->stack_a = tmp1->next;
	tmp1->next = NULL;
	printf("rra\n");
}

void	rev_rotate_b(t_objs *stacks)
{
	t_link	*tmp1;

	tmp1 = NULL;
	if (list_len(stacks->stack_b) < 2)
		return ;
	tmp1 = stacks->stack_b;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp1->next->next = stacks->stack_b;
	stacks->stack_b = tmp1->next;
	tmp1->next = NULL;
	printf("rrb\n");
}
