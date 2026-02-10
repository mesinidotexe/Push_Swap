/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_general.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:12:43 by vmesini-          #+#    #+#             */
/*   Updated: 2026/02/09 15:12:44 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	general(t_stack **a, t_stack **b)
{
	int	i;
	int	size;

	if (!a || !*a)
		return ;
	i = 0;
	size = ps_lstsize(*a);
	indexing(*a);
	while (size > 0)
	{
		if (((*a)->index >> i) & 1)
			ra(*a);
		else
			pb (b, a);
		size--;
		i++;
	}
	while (pa(a, b))
		;
}
