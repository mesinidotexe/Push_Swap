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
	if (!Lista)
		error();
	while (Lista->next)
	{
		if (Lista->content > Lista->next->content)
			return (1);
		Lista = Lista->next;
	}
	return (0);
}
int	arg_to_list(t_stack *a, t_stack *b, int argc, char *argv[])
{
	while (argc > 1)
	{
		a = ft_lstnew((*void)*ft_atol(argv[argc]));
		if (!a)
		{
			ft_lstclear(a, del);
			error();
		}
		ft_lstadd_back(a, b);
		argc--;
	}
	return (0);
}

int	checker(int argc, char *argv[])
{
	int		i;
	long	max_min;

	i = 0;
	max_min = ft_atol(argv[i]);
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
	t_stack *a;
	t_stack *b;
	
	a = NULL;
	b = NULL;
	if (!checker(argc, argv))
		error();
	if (!arg_to_list(a, b, argc, argv))
		error();
	while (!inorder(a))
	{
		sort(a);
	}
	return (0);
}
