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

int count_numbers(char **argv)
{
	int i;
	int j;
	int counter;

	i = 1;
	counter = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
			{
				counter++;
				while (ft_isdigit(argv[i][j]))
				j++;
			}
			else
				j++;
		}
		i++;
	}
	return (counter);
}
char **split_all(char **argv, char **splitted)
{
    int i;
    int j;
    int k;
    char **tmp;

    i = 1;
    k = 0;
    while (argv[i])
    {
        j = 0;
        tmp = ft_split(argv[i], ' ');
        if (!tmp)
            return NULL;
        while (tmp[j])
        {
            splitted[k] = ft_strdup(tmp[j]);
            if (!splitted[k])
            {
                free_array(splitted);
                free_array(tmp);
                return NULL;
            }
            k++;
            j++;
        }
        free_array(tmp);
        i++;
    }
    splitted[k] = NULL;
    return splitted;
}


int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char **splitted;

	a = NULL;
	b = NULL;
	if (!check_data(argc, argv))
		error();
	splitted = malloc(sizeof (char *) * (count_numbers(argv) + 1));
	if (!splitted)
		error();
	splitted = split_all(argv, splitted);
	a = arg_to_stack(a, splitted);
	free_array(splitted);
	if (!a)
		error();
	ps_print_stack(a);
	if (inorder(a))
	{
		free_list(a, b);
		return (0);
	}
	free_list(a, b);
	return (0);
}
