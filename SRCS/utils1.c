/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:41:55 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/28 13:47:29 by aachbaro         ###   ########.fr       */
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
	stacks->a = NULL;
	stacks->b = NULL;
}

void	aff_list(t_objs stacks)
{
	printf("|     a    ||     b    |\n ----------  ---------- \n");
	while (stacks.a || stacks.b)
	{
		if (stacks.a)
		{
			printf("|%10d|", stacks.a->val);
			stacks.a = stacks.a->next;
		}
		else
			printf("|          |");
		if (stacks.b)
		{
			printf("|%10d|\n", stacks.b->val);
			stacks.b = stacks.b->next;
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
