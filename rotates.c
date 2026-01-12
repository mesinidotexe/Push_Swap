/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:13:30 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/30 18:13:31 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *Lista)
{
	int	*temp;

	temp = Lista->number;
	while (Lista->next)
	{
		Lista->number = Lista->next->number;
		Lista = Lista->next;
	}
	Lista->number = temp;
	write(1, "ra\n", 3);
}

void	rb(t_stack *Lista)
{
	int	*temp;

	temp = Lista->number;
	while (Lista->next)
	{
		Lista->number = Lista->next->number;
		Lista = Lista->next;
	}
	Lista->number = temp;
	write(1, "rb\n", 3);
}

void	rr(t_stack *ListaA, t_stack *ListaB)
{
	int	*tempa;
	int	*tempb;

	tempa = ListaA->number;
	while (ListaA->next)
	{
		ListaA->number = ListaA->next->number;
		ListaA = ListaA->next;
	}
	ListaA->number = tempa;
	tempb = ListaB->number;
	while (ListaB->next)
	{
		ListaB->number = ListaB->next->number;
		ListaB = ListaB->next;
	}
	ListaB->number = tempb;
	write(1, "rr\n", 3);
}
