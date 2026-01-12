/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverses.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:13:53 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/30 18:13:54 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *Lista)
{
	t_stack *value_last_node;
	t_stack **ptr_first_node;

	ptr_first_node = &Lista;
	value_last_node = ps_lstlast(Lista);
	Lista = *ptr_first_node;
	while (Lista)
	{
		*value_last_node = *Lista;
		Lista = Lista->next;
	}
	write (1,"rra\n", 4);
}