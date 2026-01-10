/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:28:12 by vmesini-          #+#    #+#             */
/*   Updated: 2025/12/16 17:31:52 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_stack
{
	int			number;
	struct s_stack	*next;
}					t_stack;


int	check_data(int argc, char *argv[]);
int has_duplicates(int argc, char **argv);
int overflow(int argc, char *argv[]);
int args_are_int(int argc, char *argv[]);
void	del(void *content);
void	error(void);
void	sort(t_stack *Lista);

#endif