/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:59:27 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/17 14:26:30 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_nbr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-')
			return (-1);
		i++;
	}
	return (0);
}

int	check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
		if (check_nbr(av[i++]) == -1)
			return (-1);
	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

void	get_stack(int ac, char **av, t_objs *stacks)
{
	int		i;
	t_link	*tmp;

	i = 1;
	tmp = stacks->stack_a;
	while (i < ac)
	{
		add_link(stacks->stack_a, ft_atoi(av[i]));
//		printf("av[i] = %s\ndata = %s\n", av[i], ft_itoa(tmp->next->data));
		if (ft_strncmp(av[i], ft_itoa(tmp->next->data), ft_strlen(av[i])) != 0)
			printf("Error\n");
		tmp = tmp->next;
		i++;
	}
}
