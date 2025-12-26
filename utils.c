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

void sort(t_list *Lista)
{

}

void	sa(t_list *Lista)
{
	int	swap;

	if (Lista.content == NULL ||Lista.next->content == NULL)
		return ;
	swap = Lista.content;
	Lista.content = Lista.next->content;
	Lista.next->content = swap;
	write(1, "sa", 2);
}

void	sb(t_list *Lista)
{
	int	swap;

	if (Lista.content == NULL ||Lista.next->content == NULL)
		return ;
	swap = Lista.content;
	Lista.content = Lista.next->content;
	Lista.next->content = swap;
	write(1, "sb", 2);
}

void	ss(t_list *ListaA, t_list *ListaB)
{
	int swapa;
	int swapb;

	if (ListaA.content == NULL ||ListaA.next->content == NULL)
		return ;
	if (ListaB.content == NULL ||ListaB.next->content == NULL)
		return ;
	swapa = ListaA.content;
	ListaA.content = ListaA.next->content;
	ListaA.next->content = swapa;
	swapb = ListaB.content;
	ListaB.content = ListaB.next->content;
	ListaB.next->content = swapb;
	write (1, "ss", 2);
}

void	pa(t_list *ListaA, t_list *ListaB)
{
	if (ListaB.content == NULL)
		return;
	ft_lstadd_front(&ListaA, ListaB.content);
	write(1, "pa", 2);
}

void	pb(t_list *ListaB, t_list *ListaA)
{
	if (ListaA.content == NULL)
		return;
	ft_lstadd_front(&ListaB, ListaA.content);
	write(1, "pb", 2);
}

void	ra(t_list *Lista)
{
	int	temp;

	temp = Lista.content;
	while (Lista.next)
	{		
		Lista.content = Lista.next.content;
		Lista = Lista.next;
	}
	Lista.content = temp;
	write (1, "ra", 2);
}

void	rb(t_list *Lista)
{
	int	temp;

	temp = Lista.content;
	while (Lista.next)
	{		
		Lista.content = Lista.next.content;
		Lista = Lista.next;
	}
	Lista.content = temp;
	write (1, "rb", 2);
}

void	rr(t_list *ListaA, t_list *ListaB)
{
	int	tempa;
	int	tempb;

	tempa = ListaA.content;
	while (ListaA.next)
	{		
		ListaA.content = ListaA.next.content;
		ListaA = ListaA.next;
	}
	ListaA.content = tempa;
	tempB = ListaB.content;
	while (ListaB.next)
	{		
		ListaB.content = ListaB.next.content;
		ListaB = ListaB.next;
	}
	ListaB.content = tempb;
	write (1, "rr", 2);
}

void	rra(t_list *Lista)
{

	
}