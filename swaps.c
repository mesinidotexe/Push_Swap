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

void	sa(t_list *Lista)
{
	int	swap;

	if (Lista->content == NULL || Lista->next->content == NULL)
		return ;
	swap = Lista->content;
	Lista->content = Lista->next->content;
	Lista->next->content = swap;
	write(1, "sa\n", 3);
}

void	sb(t_list *Lista)
{
	int	swap;

	if (Lista->content == NULL || Lista->next->content == NULL)
		return ;
	swap = Lista->content;
	Lista->content = Lista->next->content;
	Lista->next->content = swap;
	write(1, "sb\n", 3);
}

void	ss(t_list *ListaA, t_list *ListaB)
{
	int	swapa;
	int	swapb;

	if (ListaA->content == NULL || ListaA->next->content == NULL)
		return ;
	if (ListaB->content == NULL || ListaB->next->content == NULL)
		return ;
	swapa = ListaA->content;
	ListaA->content = ListaA->next->content;
	ListaA->next->content = swapa;
	swapb = ListaB->content;
	ListaB->content = ListaB->next->content;
	ListaB->next->content = swapb;
	write(1, "ss\n", 3);
}
