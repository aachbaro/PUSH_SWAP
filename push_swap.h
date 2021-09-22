/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:27:30 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/22 14:28:36 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "LIBFT/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_link
{
	int				data;
	struct s_link	*next;
	struct s_link	*prev;
}				t_link;

typedef struct	s_objs
{
	t_link	*stack_a;
	t_link	*stack_b;
}				t_objs;

void	init_stacks(t_objs *stacks, int data);
void	aff_list(t_link *stack);
int		add_link(t_link *stack, int data);
void	free_list(t_link *stack);
int		check_nbr(char *str);
int		check_double(int ac, char **av);
int		check_int(int ac, char **av);
void	get_stack(int ac, char **av, t_objs *stacks);

#endif
