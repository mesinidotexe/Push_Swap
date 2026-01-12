/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:11:43 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/30 18:11:44 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *Lista)
{
	int	*swap;

	if (Lista->number == NULL || Lista->next->number == NULL)
		return ;
	swap = Lista->number;
	Lista->number = Lista->next->number;
	Lista->next->number = swap;
	write(1, "sa\n", 3);
}

void	sb(t_stack *Lista)
{
	int	*swap;

	if (Lista->number == NULL || Lista->next->number == NULL)
		return ;
	swap = Lista->number;
	Lista->number = Lista->next->number;
	Lista->next->number = swap;
	write(1, "sb\n", 3);
}

void	ss(t_stack *ListaA, t_stack *ListaB)
{
	int	*swapa;
	int	*swapb;

	if (ListaA->number == NULL || ListaA->next->number == NULL)
		return ;
	if (ListaB->number == NULL || ListaB->next->number == NULL)
		return ;
	swapa = ListaA->number;
	ListaA->number = ListaA->next->number;
	ListaA->next->number = swapa;
	swapb = ListaB->number;
	ListaB->number = ListaB->next->number;
	ListaB->next->number = swapb;
	write(1, "ss\n", 3);
}
