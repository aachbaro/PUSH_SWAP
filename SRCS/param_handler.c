/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:59:27 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/22 14:28:15 by aachbaro         ###   ########.fr       */
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

int	check_int(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < ac)
	{
		tmp = ft_itoa(ft_atoi(av[i]));
		if (ft_strncmp(av[i], tmp, ft_strlen(av[i])))
			return (-1);
		free(tmp);
		i++;
	}
	return (0);
}

void	get_stack(int ac, char **av, t_objs *stacks)
{
	int		i;

	i = 2;
	while (i < ac)
		add_link(stacks->stack_a, ft_atoi(av[i++]));
}
