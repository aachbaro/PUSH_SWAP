/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:10:05 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/23 17:14:14 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_ab(t_objs *stacks)
{
	t_link	*tmp1;

	tmp1 = NULL;
	if (list_len(stacks->stack_a) < 2 || list_len(stacks->stack_b) < 2)
		return ;
	tmp1 = stacks->stack_a;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp1->next->next = stacks->stack_a;
	stacks->stack_a = tmp1->next;
	tmp1->next = NULL;
	tmp1 = stacks->stack_b;
	while (tmp1->next->next)
		tmp1 = tmp1->next;
	tmp1->next->next = stacks->stack_b;
	stacks->stack_b = tmp1->next;
	tmp1->next = NULL;
	printf("rrr\n");
}
