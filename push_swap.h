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
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}					t_stack;

// Data validation
int					check_data(int argc, char *argv[]);
int					has_duplicates(int argc, char **argv);
int					overflow(int argc, char *argv[]);
int					args_are_int(int argc, char *argv[]);

// Utils
void				error(void);
// void				sort(t_stack *a, t_stack *b);

// Data Order
int					inorder(t_stack *Lista);
t_stack				*arg_to_stack(t_stack *a, int argc, char *argv[]);

// Lists/Stack
void				ps_print_stack(t_stack *a);
void				free_list(t_stack *a, t_stack *b);
t_stack				*ps_lstnew(int content);
void				ps_lstclear(t_stack **lst);
void				ps_lstadd_back(t_stack **lst, t_stack *new);
void				ps_lstadd_front(t_stack **lst, t_stack *new);
t_stack				*ps_lstlast(t_stack *lst);
void				ps_lstdelone(t_stack *lst);

#endif