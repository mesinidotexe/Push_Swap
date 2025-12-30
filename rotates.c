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

void	ra(t_list *Lista)
{
	int	temp;

	temp = Lista->content;
	while (Lista->next)
	{
		Lista->content = Lista->next->content;
		Lista = Lista->next;
	}
	Lista->content = temp;
	write(1, "ra\n", 3);
}

void	rb(t_list *Lista)
{
	int	temp;

	temp = Lista->content;
	while (Lista->next)
	{
		Lista->content = Lista->next->content;
		Lista = Lista->next;
	}
	Lista->content = temp;
	write(1, "rb\n", 3);
}

void	rr(t_list *ListaA, t_list *ListaB)
{
	int	tempa;
	int	tempb;

	tempa = ListaA->content;
	while (ListaA->next)
	{
		ListaA->content = ListaA->next->content;
		ListaA = ListaA->next;
	}
	ListaA->content = tempa;
	tempb = ListaB->content;
	while (ListaB->next)
	{
		ListaB->content = ListaB->next->content;
		ListaB = ListaB->next;
	}
	ListaB->content = tempb;
	write(1, "rr\n", 3);
}
