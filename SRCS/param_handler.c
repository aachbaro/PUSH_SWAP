/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param_handler2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:31:13 by aachbaro          #+#    #+#             */
/*   Updated: 2021/10/04 18:05:38 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_nbr(char *str)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = ft_itoa(ft_atoi(str));
	if (ft_strncmp(str, tmp, ft_strlen(str)))
	{
		free(tmp);
		return (-1);
	}
	free(tmp);
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-')
			return (-1);
		i++;
	}
	return (0);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

int	get_stack(int ac, char **av, t_objs *stacks)
{
	int		i;
	int		j;
	char	**tab;

	i = 1;
	while (i < ac)
	{
		tab = ft_split(av[i], ' ');
		j = 0;
		while (tab[j])
		{
			if (check_nbr(tab[j]) == -1)
				return (-1);
			add_link(&stacks->a, ft_atoi(tab[j]), 0);
			j++;
		}
		free_tab(tab);
		i++;
	}
	return (0);
}

int		check_double(t_objs *stacks)
{
	t_link	*tmp;
	t_link	*tmp2;

	tmp = stacks->a;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->data == tmp2->data)
				return (-1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}
