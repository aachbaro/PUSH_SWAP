/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:41:55 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/24 18:17:59 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	add_link(t_link **stack, int data, int val)
{
	t_link	*new;
	t_link	*tmp;

	new = malloc(sizeof(t_link));
	if (!new)
		return (-1);
	new->data = data;
	new->val = val;
	new->next = NULL;
	tmp = *stack;
	if (*stack == NULL)
		*stack = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (0);
}

void	init_stacks(t_objs *stacks)
{
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
}

void	aff_list(t_objs stacks)
{
	printf("|     a    ||     b    |\n ----------  ---------- \n");
	while (stacks.stack_a || stacks.stack_b)
	{
		if (stacks.stack_a)
		{
			printf("|%10d|", stacks.stack_a->val);
			stacks.stack_a = stacks.stack_a->next;
		}
		else
			printf("|          |");
		if (stacks.stack_b)
		{
			printf("|%10d|\n", stacks.stack_b->val);
			stacks.stack_b = stacks.stack_b->next;
		}
		else
			printf("|          |\n");
	}
}

void	free_list(t_link *stack)
{
	t_link	*tmp;

	tmp = stack;
	while (tmp)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

int	list_len(t_link *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
