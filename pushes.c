/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:11:33 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/30 18:11:36 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *ListaA, t_list *ListaB)
{
	if (ListaB->content == NULL)
		return ;
	ft_lstadd_front(&ListaA, ListaB->content);
	write(1, "pa\n", 3);
}

void	pb(t_list *ListaB, t_list *ListaA)
{
	if (ListaA->content == NULL)
		return ;
	ft_lstadd_front(&ListaB, ListaA->content);
	write(1, "pb\n", 3);
}
