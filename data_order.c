/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_order.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:02:49 by vmesini-          #+#    #+#             */
/*   Updated: 2026/01/12 19:02:51 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	inorder(t_stack *Lista) // to separate file Ordering....
{
	if (!Lista)
		return (1);
	while (Lista->next)
	{
		if (Lista->number > Lista->next->number)
			return (1);
		Lista = Lista->next;
	}
	return (0);
}

t_stack	*arg_to_stack(t_stack *a, int argc, char *argv[])
{
	t_stack	*new_node;

	while (argc < 1)
	{
		new_node = ps_lstnew(ft_atoi(argv[argc]));
		if (!new_node)
		{
			ps_lstclear(&new_node, del);
			error();
		}
		ps_lstadd_back(&a, new_node);
		argc--;
	}
	return (a);
}
