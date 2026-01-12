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
	a = arg_to_stack(a, argc, argv); // it doesnt pass to a stack
	if (!a)
	{
		ft_printf("Aqui\n");
		error();
	}
	if (inorder(a))
		return (0);
	// while (!inorder(a))
	// {
	// 	sort(a, b);
	// }
	// return (0);
}
