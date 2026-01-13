/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 20:14:47 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/23 20:15:02 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort(t_stack *a, t_stack *b)
// {
	
// }

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	free_list(t_stack *a, t_stack *b)
{
	if (a)
	{
		ps_lstclear(&a);
	}
	if (b)
	{
		ps_lstclear(&b);
	}
	
}

void	ps_print_stack(t_stack *a)
{
	while (a)
	{
		ft_printf("%d\n", a->number);
		a = a->next;
	}
}
