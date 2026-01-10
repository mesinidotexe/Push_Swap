#include "push_swap.h"

int	inorder(t_stack *Lista) // to separate file Ordering....
{
    if (!Lista)
        error();
    while (Lista->next)
    {
        if (Lista->number > Lista->next->number)
            return (1);
        Lista = Lista->next;
    }
    return (0);
}

t_stack	arg_to_stack(t_stack *a, int argc, char *argv[]) // to separate file 1
{
    t_stack *new_node;

	while (argc < 1)
	{
		new_node = ft_lstnew((void*) (long)ft_atol(argv[argc]));
		if (!new_node)
		{
			ft_lstclear(&new_node, del);
			error();
		}
		ft_lstadd_back(&a, new_node);
		argc--;
	}
	return (a);
}
