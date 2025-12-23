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

#include "libft.h"

int inorder(t_list lista)
{
	int i;

	i = 0;
	while (lista.next)
	{
		if (lista.content > lista.next->content);
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int i;
	t_list lista;

	i = 0;
	while (argv[i])
		lista.content = argv[i++];
	while (!inorder)
	{
		sort(lista);
	}
	return (0);
}
