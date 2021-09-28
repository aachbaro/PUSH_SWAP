/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:00:34 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/28 13:46:58 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->a) < 2)
		return ;
	tmp = stacks->a;
	stacks->a = stacks->a->next;
	add_link(&stacks->a, tmp->data, tmp->val);
	free(tmp);
	printf("ra\n");
}

void	rotate_b(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->b) < 2)
		return ;
	tmp = stacks->b;
	stacks->b = stacks->b->next;
	add_link(&stacks->b, tmp->data, tmp->val);
	free(tmp);
	printf("rb\n");
}

void	rotate_ab(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->a) < 2 || list_len(stacks->b) < 2)
		return ;
	tmp = stacks->a;
	stacks->a = stacks->a->next;
	add_link(&stacks->a, tmp->data, tmp->val);
	free(tmp);
	tmp = stacks->b;
	stacks->b = stacks->b->next;
	add_link(&stacks->b, tmp->data, tmp->val);
	free(tmp);
	printf("rr\n");
}

void	rev_rotate_a(t_objs *stacks)
{
	t_link	*tmp1;

	tmp1 = NULL;
	if (list_len(stacks->a) < 2)
		return ;
	tmp1 = stacks->a;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp1->next->next = stacks->a;
	stacks->a = tmp1->next;
	tmp1->next = NULL;
	printf("rra\n");
}

void	rev_rotate_b(t_objs *stacks)
{
	t_link	*tmp1;

	tmp1 = NULL;
	if (list_len(stacks->b) < 2)
		return ;
	tmp1 = stacks->b;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp1->next->next = stacks->b;
	stacks->b = tmp1->next;
	tmp1->next = NULL;
	printf("rrb\n");
}
