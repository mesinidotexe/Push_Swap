/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_function_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 19:10:07 by vmesini-          #+#    #+#             */
/*   Updated: 2026/01/12 19:10:08 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_lstdelone(t_stack *lst, void (*del)(int *))
{
	if (!lst || !del)
		return ;
	if (lst)
		del(lst->number);
	free(lst);
}
