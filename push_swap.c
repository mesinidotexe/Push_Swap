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

int	inorder(t_list *Lista)
{
	int	i;

	i = 0;
	while (Lista->next)
	{
		if (Lista->content > Lista->next->content)
			return (1);
		Lista = Lista->next;
	}
	return (0);
}
int	arg_to_list(int argc, char *argv[])
{
	int		i;
	t_list	*lista;
	t_list	*new_node;

	lista = NULL;
	i = 1;
	while (i < argc)
	{
		new_node = ft_lstnew(ft_atol(argv[i]));
		if (!new_node)
		{
			ft_lstclear(&lista, del);
			error();
			return (1);
		}
		ft_lstadd_back(&lista, new_node);
		i++;
	}
	while (!inorder(lista))
	{
		sort(&lista);
	}
	return (0);
}

int	checker(int argc, char *argv[])
{
	int		i;
	long	max_min;

	i = 0;
	max_min = ft_atol(argv);
	if (max_min < INT_MIN || max_min > INT_MAX)
		return (1);
	while (argv[i])
	{
		if (!ft_isdigit(argv[i])) // nbr >= 10 ??????
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (!checker(argc, argv))
		return (error);
	if (arg_to_list(argc, argv))
		return (error);
	return (0);
}
