/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:48:38 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/19 16:48:39 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int inorder(t_list Lista)
{
	int i

	i = 0;
	while (Lista.next)
	{
		if (Lista.content > Lista.next->content);
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int i;
	t_list Lista;

	i = 0;
	while (argv[i])
		Lista.content = argv[i++];
	while (!inorder)
	{
		sort(Lista);
	}
	return (0);
}
