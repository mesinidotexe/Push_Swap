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

#include "libft.h"

void sort(t_list lista)
{

}

void	*sa(t_list lista)
{
	int	swap;

	if (lista.content == NULL ||lista.next->content == NULL)
		return ;
	swap = lista.content;
	lista.content = lista.next->content;
	lista.next->content = swap;
	write(1, "sa", 2);
}

void	*sb(t_list lista)
{
	int	swap;

	if (lista.content == NULL ||lista.next->content == NULL)
		return ;
	swap = lista.content;
	lista.content = lista.next->content;
	lista.next->content = swap;
	write(1, "sb", 2);
}

void	*ss(int arga[], int argb[])
{
	int swapa;
	int swapb;

	if (arga[2] == '\0' || argb[2] == '\0')
		return;
	swapa = arga[0];
	arga[0] = arga[1];
	argb[1] = swapa;
	swapb = argb[0];
	argb[0] = argb[1];
	argb[1] = swapb;
	write (1, "ss", 2);
}
