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

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	i = 0;
	while (i < argc)
		if (!argv[i++][0])
			error();
	a = NULL;
	b = NULL;
	if (!check_data(argc, argv))
		error();
	a = arg_to_stack(a, argc, argv);
	if (!a)
		error();
	ps_print_stack(a); // debugging tool
	if (inorder(a))
	{
		free_list(a, b);
		return (0);
	}
	free_list(a, b);
	return (0);
}
