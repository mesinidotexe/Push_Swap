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
	char	**splitted;

	(void)argc;
	a = NULL;
	b = NULL;
	if (empty_strings(argc, argv))
		error();
	splitted = malloc(sizeof (char *) * (count_numbers(argv) + 1));
	if (!splitted)	
		error();
	splitted = split_all(argv, splitted);
	if (!splitted)
		error();
	if (!validate_splitted(splitted, argv[0]))
		return (free_array (splitted), error(), -1);
	if (!(a = arg_to_stack(a, splitted)))
		return (error(), -1);
	free_array(splitted);
	if (!inorder(a))
		sorting(a, b);
	free_list(a, b);
	return (0);
}
