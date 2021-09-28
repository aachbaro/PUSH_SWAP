/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:14:13 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/28 13:57:29 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_objs *stacks)
{
	int	tmp;
	int	tmp2;

	tmp = stacks->a->data;
	tmp2 = stacks->a->val;
	if (list_len(stacks->a) < 2)
		return ;
	stacks->a->data = stacks->a->next->data;
	stacks->a->val = stacks->a->next->val;
	stacks->a->next->data = tmp;
	stacks->a->next->val = tmp2;
	printf("sa\n");
}

void	swap_b(t_objs *stacks)
{
	int	tmp;
	int	tmp2;

	tmp = stacks->b->data;
	tmp2 = stacks->b->val;
	if (list_len(stacks->b) < 2)
		return ;
	stacks->b->data = stacks->b->next->data;
	stacks->b->val = stacks->b->next->val;
	stacks->b->next->data = tmp;
	stacks->b->next->val = tmp2;
	printf("sb\n");
}

void	swap_ab(t_objs *stacks)
{
	int	tmp;
	int	tmp2;

	tmp = stacks->a->data;
	tmp2 = stacks->a->val;
	if (list_len(stacks->a) < 2 || list_len(stacks->b) < 2)
		return ;
	stacks->a->data = stacks->a->next->data;
	stacks->a->val = stacks->a->next->val;
	stacks->a->next->data = tmp;
	stacks->a->next->val = tmp2;
	tmp = stacks->b->data;
	tmp2 = stacks->b->val;
	stacks->b->data = stacks->b->next->data;
	stacks->b->val = stacks->b->next->val;
	stacks->b->next->data = tmp;
	stacks->b->next->val = tmp2;
	printf("ss\n");
}

void	push_a(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->b) == 0)
	{
		free(tmp);
		return ;
	}
	tmp = stacks->b;
	stacks->b = stacks->b->next;
	tmp->next = stacks->a;
	stacks->a = tmp;
	printf("pa\n");
}

void	push_b(t_objs *stacks)
{
	t_link	*tmp;

	tmp = NULL;
	if (list_len(stacks->a) == 0)
		return ;
	tmp = stacks->a;
	stacks->a = stacks->a->next;
	tmp->next = stacks->b;
	stacks->b = tmp;
	printf("pb\n");
}
