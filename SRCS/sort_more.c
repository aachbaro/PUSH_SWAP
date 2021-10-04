/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:27:47 by aachbaro          #+#    #+#             */
/*   Updated: 2021/10/04 14:07:15 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_more(t_objs *stacks)
{
	int		med;
	t_link	*tmp;

	med = 0;
	while (list_len(stacks->a) > 2)
	{
		tmp = stacks->a;
		med = get_median(stacks->a);
		while (tmp)
		{
			if (tmp->val < med)
			{
				get_out(stacks, tmp->val);
				tmp = stacks->a;
			}
			else
				tmp = tmp->next;
		}
	}
}
