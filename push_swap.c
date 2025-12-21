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

void *sa(int args[])
{
	int swap;

	if (args[2] == '\0')
		return;
	swap = args[0];
	args[0] = args[1];
	args[1] = swap;
}

void *sb(int args[])
{
	int swap;

	if (args[2] == '\0')
		return;
	swap = args[0];
	args[0] = args[1];
	args[1] = swap;
}

int main(int argc, char *argv[])
{
	while
	return 0;
}
